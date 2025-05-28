//week15_4
Table table = loadTable("pressure.csv","header");

for(TableRow row:table.rows()){
  String t=row.getString("測量日期");
  int up =new Integer(row.getString("收縮壓(mmHg)")); //從Excel 把標題copy過來
  int down =new Integer(row.getString("舒張壓(mmHg)")); 
  println("測量日期:"+ t +"收縮壓:" +up+ "舒張壓:"+down);
}
