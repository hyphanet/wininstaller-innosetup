
library FreenetInstaller_InnoSetup_library;

{$mode objfpc}{$H+}

uses
  Classes,
  SysUtils,
  winsock,
  Windows;

  { Function fIsPortAvailable is directly inspired by :
   https://theroadtodelphi.wordpress.com/2010/02/21/checking-if-a-tcp-port-is-open-using-delphi-and-winsocks/
   Thank you Rodrigo ! }


  function fIsPortAvailable(sIpAddress: ansistring; wPort: word): boolean; stdcall;
  var
    client: sockaddr_in;
    sock: integer;
    ret: integer;
    wsdata: WSAData;
    bConnectSuccess: boolean;
  begin
    Result := False;
    ret := WSAStartup($0002, wsdata); //initiates use of the Winsock DLL
    if ret <> 0 then
      exit;
    try
      client.sin_family := AF_INET;  //Set the protocol to use , in this case (IPv4)
      client.sin_port := htons(wPort); //convert to TCP/IP network byte order (big-endian)
      client.sin_addr.s_addr := inet_addr(PAnsiChar(sIpAddress));  //convert to IN_ADDR  structure
      sock := socket(AF_INET, SOCK_STREAM, 0);    //creates a socket
      bConnectSuccess := connect(sock, client, SizeOf(client)) = 0;  //establishes a connection to a specified socket

      if bConnectSuccess then // Can connect ? so port is propably already used !
        Result := False
      else
        Result := True;

    finally
      WSACleanup;
    end;

  end;

  function fMemoryTotalPhys(var MemTotalPhysMB: integer): boolean; stdcall;
  var
    MemStatus: TMemoryStatus;
  begin
    try
      MemStatus.dwLength := SizeOf(MemStatus);
      GlobalMemoryStatus(MemStatus);
      MemTotalPhysMB := round(MemStatus.dwTotalPhys / 1024 / 1024);
      Result := True;
    except
      Result := False;
    end;

  end;

exports fIsPortAvailable, fMemoryTotalPhys;

begin
end.
