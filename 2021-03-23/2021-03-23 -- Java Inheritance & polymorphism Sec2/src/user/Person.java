package user;

//public class Person {
//abstract public class Person {
public abstract class Person {
    //private String name, gender, bg; 
    protected String name, gender, bg; 

    public Person() {
        name=gender=bg="TBA";
    }

    public Person(String name, String gender, String bg) {
        this.name = name;
        this.gender = gender;
        this.bg = bg;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getBg() {
        return bg;
    }

    public void setBg(String bg) {
        this.bg = bg;
    }
    
    //public abstract void doSome();  //no implementation
    
    public void showPersonInfo(){
        System.out.println("Name="+name+", Gender="+gender+", BG="+bg);
    }    
    public abstract void showInfo();
}
