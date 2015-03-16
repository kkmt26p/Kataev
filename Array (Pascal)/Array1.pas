const
  argument = 10;

var
  i, n: integer;

var
  m: array [1..argument] of integer;

begin
  readln(n);
  for i := 1 to n do
    m[i] := 2 * i - 1;
  for i := 1 to n do
    write(m[i]:3);
end.