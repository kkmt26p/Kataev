var den,mec,god:integer;
Begin
Writeln('¬ведите число,мес€ц,год');
Readln(den,mec,god);
if (mec=1) or (mec=01) then Writeln(den,' €нвар€ ',god)
else
if (mec=2) or (mec=02) then Writeln(den,' феврал€ ',god)
else
if (mec=3) or (mec=03) then Writeln(den,' марта ',god)
else
if (mec=4) or (mec=04) then Writeln(den,' апрел€ ',god)
else
if (mec=5) or (mec=05) then Writeln(den,' май€ ',god)
else
if (mec=6) or (mec=06) then Writeln(den,' июн€ ',god)
else
if (mec=7) or (mec=07) then Writeln(den,' июл€ ',god)
else
if (mec=8) or (mec=08) then Writeln(den,' августа ',god)
else
if (mec=9) or (mec=09) then Writeln(den,' сент€бр€ ',god)
else
if mec=10 then Writeln(den,' окт€бр€ ',god)
else
if mec=11 then Writeln(den,' но€бр€ ',god)
else
if mec=12 then Writeln(den,' декабр€ ',god)
else 
Writeln('»звините видимо вы ошиблись с датой!');
End.