package user;

import mainpkg.MyRandom;

public class Student extends Person{
    private int id; private float cgpa;

    public Student(){
         
    }
    public Student(int id, String name, String gender, String bg, float cgpa) {
        this.id=id;
        this.name=name;
        this.gender=gender;
        this.bg=bg;
        this.cgpa=cgpa;
    }
    
    public void showStudInfo(){
        MyRandom r = new MyRandom();
        System.out.println("ID="+id+", Name="+name+", Gender="+gender+", BG="
                +bg+", Cgpa="+cgpa);
    }
    
    @Override
    public void showInfo(){
        System.out.println("public abstract void showInfo() is overridden");
    }
}
