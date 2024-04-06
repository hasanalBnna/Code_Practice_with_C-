
public class Dog {
    String breed;
    String size;
    int age;
    String colour;
    public String getInfo(){
        return("Breed is:"+breed+"Size is:"+size+"Age is:"+age+"Colour is:"+colour);

    }
    public static void main(String[] args){
        Dog obj= new Dog();
        obj.breed="maltese";
        obj.size="Small";
        obj.age=2;
        obj.colour="White";
        System.out.println(obj.getInfo());
    }
}
