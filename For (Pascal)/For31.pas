var 
n,i:integer;
A:real;
Begin
Writeln('������� ���-�� ���������� ��������');
Readln(n);
A:=2;
if n<1 then Writeln('������')
else
Writeln;
for i:= 1 to n do begin
A:=2+(1/A);
Write('A',i,'= ',A:2:6,' ');
end;
End.

