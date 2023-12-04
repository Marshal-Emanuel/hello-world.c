class Cat extends Animals{

    int age;
    public Cat(String n ame, String color, int age) {
        super(name, color);
        //TODO Auto
    }

    

    @Override
     public void sound(){
        super.sound();
        System.out.println("Wof wof");
    }


}
