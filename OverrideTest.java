public class OverrideTest {
    public static void main(String[] args) {
    //Animals.sound();  must be ststic for ot to be called from the main method wothought instanciation
    //Cat.sound();
    Cat two=new Cat("Jerry", "Brown", 2);
    two.sound();
    }
    
}

class Animals{
    String name;
    String color;

public Animals(String name, String color){
    this.name=name;
    this.color=color;
}

//Cat one=new Cat("Tom", "white", 1);
public void sound(){
    System.out.println("Will produce a sound");
    //one.sound();
}

}

   


