class Cat extends Animals{

    int age;
    public Cat(String name, String color, int age) {
        super(name, color);
        //TODO Auto  gene
    }

    

    @Override
     public void sound(){
        super.sound();
        System.out.println("Wof wof");
    }


}
