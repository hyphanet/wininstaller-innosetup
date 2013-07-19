{
 Easy way to quick test FreenetInstaller_InnoSetup_library.dll
}

unit Test_Dll_unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Edit1: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    procedure Button1Click(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

function fIsPortAvailable(sIpAddress: ansistring; wPort: word): boolean; stdcall;
  external 'FreenetInstaller_InnoSetup_library.dll';
function fMemoryTotalPhys(var MemTotalPhysMB: integer): boolean; stdcall; external 'FreenetInstaller_InnoSetup_library.dll';

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.Button1Click(Sender: TObject);
var
  Port, i, MemTotalPhysMB: integer;
begin
  // As a quick to way to test, we don't check if it is a true integer. We trust the input !
  Port := StrToInt(Edit1.Text);
  try
    repeat
      if fIsPortAvailable('127.0.0.1', Port) then
      begin
        Label1.Caption := 'Port ' + IntToStr(Port) + ' is available';
        Break;
      end
      else
      begin
        Label1.Caption := 'Port ' + Edit1.Text + ' is not available';
        Inc(Port);
        Continue;
      end;
    until Port = Port + 256;
  except
    ShowMessage('Error 1');
  end;

  try
    fMemoryTotalPhys(MemTotalPhysMB);
    Label2.Caption := 'MemTotalPhysMB is ' + IntToStr(MemTotalPhysMB) + ' MB';
  except
    ShowMessage('Error 2');
  end;

end;

end.
