//week15_4
Table table = loadTable("pressure.csv","header");

for(TableRow row:table.rows()){
  String t=row.getString("���q���");
  int up =new Integer(row.getString("���Y��(mmHg)")); //�qExcel ����Dcopy�L��
  int down =new Integer(row.getString("�αi��(mmHg)"));
  println("���q���:"+ t +"���Y��:" +up+ "�αi��:"+down);
}
