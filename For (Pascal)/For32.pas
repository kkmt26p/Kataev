var 
n,i:integer;
A,B:real;
Begin
Writeln('������� ���-�� ���������� ��������');
Readln(n);
A:=1;
B:=1;
if n<1 then Writeln('������')
else
Writeln;
for i:= 1 to n do begin
A:=(B+1)/i;
B:=A;
Write('A',i,'=',A:2:6,'  ');
end;
End.

