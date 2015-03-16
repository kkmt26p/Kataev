var
  x, y: real;

begin
  Readln(x, y);
  if (x>0) and (y>0) then Writeln('1');
  if (x<0) and (y>0) then Writeln('2');
  if (x<0) and (y<0) then Writeln('3');
  if (x>0) and (y<0) then Writeln('4');
end.