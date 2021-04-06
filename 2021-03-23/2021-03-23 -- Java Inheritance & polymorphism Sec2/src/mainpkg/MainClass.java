package mainpkg;

//import java.util.Random;
import java.util.ArrayList;
import java.util.Scanner;
import resource.Granade;
import resource.Pistol;
import resource.Sword;
import resource.Weapon;
import user.Employee;

public class MainClass {
    
    public static void main(String[] args) {
        Employee e = new Employee();
        e.prepareTaxReturn();
        e.showInfo();
        //System.out.println(e);
        System.out.println(e.getName());
        MyRandom r = new MyRandom();
        System.out.println("Random int: "+ r.nextInt());
        System.out.println("Random byte: "+ r.nextByte());
        DemoClass d = new DemoClass();

    }    
}
