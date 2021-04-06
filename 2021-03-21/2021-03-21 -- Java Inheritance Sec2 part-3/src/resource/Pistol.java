package resource;
public class Pistol extends Weapon{
    //public void overhaulPistol(){
    @Override
    public void overhaul(){
        System.out.println("Pistol is overhauled");
    }
    public void loadMagazine(){
        System.out.println("Magazine is loaded.");
    }
   
}
