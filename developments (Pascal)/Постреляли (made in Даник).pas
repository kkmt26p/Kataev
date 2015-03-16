var
  i, j, metka, c, Lin, Klet, Variant, bax, k: integer;

begin
  randomize;
  Writeln(' акой вариан игры выбираете стандарт (1) или произвольный (2)');
  Readln(Variant);
  if Variant = 1 then begin
    Writeln('ѕоле состоит из 5 линий по 10 клеток');
    Writeln('Q озночает, где находилась цель ');
    Writeln('O озночает пустоту');
    Writeln('X озночает, что вы попали!');
    Writeln('¬ какую клетку стрел€ете?');
    metka := random(1, 50);
    Readln(bax);
    for i := 1 to 5 do 
    begin
      for j := 1 to 10 do 
      begin
        c := c + 1;
        if (c = metka) and (bax = metka) then 
          Write('X')
        else
        if c = metka then begin
          Write('Q');
          k := c;
        end
        else
          Write('O');
      end;
      Writeln;
    end;
    if bax = metka then Writeln('¬ы попали!')
    else
      Writeln('¬ы промазали :( надо было стрел€ть в ', k, ' клетку');
  end
  else
    Writeln('¬ведите сначала количество линий, а затем кол-во клеток в линии');
  Readln(Lin, Klet);
  k := Lin * Klet;
  metka := random(1, k);
  Writeln('ѕоле состоит из ', Lin, ' линий в которых по ', Klet, ' клеток');
  Writeln('Q озночает, где находилась цель ');
  Writeln('O озночает пустоту');
  Writeln('X озночает, что вы попали!');
  Writeln('¬ какую клетку стрел€ете?');
  Readln(bax);
  for i := 1 to Lin do 
  begin
    for j := 1 to Klet do 
    begin
      c := c + 1;
      if (c = metka) and (bax = metka) then 
        Write('X')
      else
      if c = metka then begin
        Write('Q');
        k := c;
      end
      else
        Write('O');
    end;
    Writeln;
  end;
  if bax = metka then Writeln('¬ы попали!')
  else
    Writeln('¬ы промазали :( надо было стрел€ть в ', k, ' клетку');
end.