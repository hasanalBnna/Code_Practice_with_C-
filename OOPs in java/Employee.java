class Employee{
   private int empId = 2;
   private String name;
   private int ph = 17;
   private int basicsal = 20000;
   private int incentive = 2000;
   Employee(String emplName, int phoneNo){
    ph= phoneNo;
    name= emplName;
   }
   private void countsel(){
        System.out.println(basicsal + incentive);
    }
    int getph(){
        return ph;
    }
    String getname(){
        return name;
    }
}
