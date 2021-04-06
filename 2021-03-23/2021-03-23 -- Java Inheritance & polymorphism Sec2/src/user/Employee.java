package user;

import abstractpkg.Taxable;

public class Employee extends Person implements Taxable{
    private int id;
    private String desig;
    private float salary;
    
    public Employee(){
        id=0; desig="TBA"; salary=0.0f;
    }
    
    @Override
    public void showInfo(){
        //System.out.println("public abstract void showInfo() is overridden");
        System.out.println("ID="+id+", Name="+name+", Designation"
                +desig+", Gender="+gender+", BG="+bg+", Salary="+salary);
    }
    
    @Override
    public String toString(){
        return "ID:"+id+", Name:"+name+", Designation:"
                +desig+", Gender:"+gender+", BG:"+bg+", Salary:"+salary;
    }
    
    @Override
    public void prepareTaxReturn(){
        System.out.println("tax return is prepared.");
    }
}
