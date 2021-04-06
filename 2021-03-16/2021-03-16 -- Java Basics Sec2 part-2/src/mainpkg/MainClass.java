package mainpkg;

//import java.util.Random;
import user.Person;
import user.Student;

public class MainClass {
    
    public static void main(String[] args) {
        MyRandom r = new MyRandom();
        int x = r.nextInt();
        float f = r.nextFloat();
        byte b = r.nextByte();
        System.out.println("x="+x+", b="+b+", f="+f);
        Person p = new Person();
        //p.showPersonInfo();
        //p.doSome();
        Student asif,luna;
        asif = new Student();
        luna = new Student();
        asif.showPersonInfo();
        Person p2 = new Student();
    }    
}
