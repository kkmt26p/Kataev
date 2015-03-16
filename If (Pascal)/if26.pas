var
  x, y: real;

begin
  Readln(x);
  if  x <= 0 then y := x / -1
    else 
  if (x > 0) and (x < 2) then y:= sqr(x)
      else
  if x >= 2 then y := 4;
  Writeln('f(x) = ', y:1:2);
end.