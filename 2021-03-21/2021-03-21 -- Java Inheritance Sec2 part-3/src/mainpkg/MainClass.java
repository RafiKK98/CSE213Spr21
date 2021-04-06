package mainpkg;

//import java.util.Random;
import java.util.ArrayList;
import java.util.Scanner;
import resource.Granade;
import resource.Pistol;
import resource.Sword;
import resource.Weapon;

public class MainClass {
    
    public static void main(String[] args) {
        //Sword sd = new Sword();         sd.overhaulSword();
        //Pistol p = new Pistol();        p.overhaulPistol();
        //Granade g = new Granade();      g.overhaulGranade();
        
        //ArrayList<Sword> sList = new 	ArrayList<Sword>();
	//ArrayList<Pistol> pList = new 	ArrayList<Pistol>();
	//ArrayList<Granade> gList = new 	ArrayList<Granade>();
        
        ArrayList<Weapon> wList = new 	ArrayList<Weapon>();
        int ch;
        do{
            Scanner s = new Scanner(System.in);
            System.out.println("Enter [1] to add a Sword.");
            System.out.println("Enter [2] to add a Pistol.");
            System.out.println("Enter [3] to add a Granade.");
            System.out.println("Enter [4] to overhaul ALL weapons.");
            System.out.println("Enter [5] to overhaul all Swords.");
            System.out.println("Enter [6] to overhaul all Pistols.");
            System.out.println("Enter [7] to overhaul all Granades.");
            System.out.println("Enter [8] to load magazine of all Pistols.");
            System.out.println("Enter [9] to exit.");
            System.out.print("Enter your choice...");
            ch = s.nextInt();
            
            switch(ch){
                case 1:
                    Sword sd = new Sword(); //sd.setInfo();
                    wList.add(sd);
                    //wList.add(new Sword());
                    break;
                case 2:
                    Pistol p = new Pistol(); //p.setInfo();
                    wList.add(p);
                    break;
                case 3:
                    Granade g = new Granade(); //g.setInfo();
                    wList.add(g);
                    break;
                case 4:
                    for(Weapon w: wList)  w.overhaul();
                    break;

                case 5:
                    boolean isFound=false;
                    for(Weapon w: wList){
                        if(w instanceof Sword){ w.overhaul(); isFound=true;}
                        if(!isFound) System.out.println("No Sword exists to overhaul");
                    }
                    break;

                case 6:
                    for(Weapon w: wList){
                        if(w instanceof Pistol) w.overhaul();
                    }                   
                    break;

                case 7:
                    for(Weapon w: wList){
                        if(w instanceof Granade) w.overhaul();
                    }
                    
                    break;

                case 8:
                   for(Weapon w: wList){
                       Pistol pst;
                        if(w instanceof Pistol){
                            pst = (Pistol)w;    //magic of "is-a" relationship
                            pst.loadMagazine();
                        }
                    }                    
                    break;
                    
            }
            
        }while(ch != 9);
    }    
}
