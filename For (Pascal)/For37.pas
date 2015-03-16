var 
n,i,k:integer;
A,B:real;
Begin
Writeln('¬ведите кол-во проводимых операций');
Readln(n);
B:=0;
if n<1 then Writeln('ќшибка')
else
Writeln;
for i:= 1 to n do begin
if i<>n then begin
B:=power(i,i);
A:=A+B;
Write(i,'^',i,'+')
end
else begin
B:=power(i,i);
A:=A+B;
Write(i,'^',i,'=')
end
end;
Write(A:3:2);
End.

