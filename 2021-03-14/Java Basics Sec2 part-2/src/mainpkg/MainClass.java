package mainpkg;

import java.util.Random;

public class MainClass {
    
    /*
    //1-D array demo
    public static void main(String[] args) {
        int[] oneD;    //class int[]{...}
        //Student asif = new Student();
        //oneD = new int[](5);
        oneD = new int[5];
        int i;
        for(i=0;i<oneD.length ;i++) oneD[i]=i+10;
        
        for(i=0;i<oneD.length  ;i++)
            System.out.println("oneD["+i+"]="+oneD[i]);
        
        System.out.println("bye..");
    }
    */
    //2-D array demo
    public static void main(String[] args) {
        int[][] twoD;    //class int[][]{...}
        //Student asif = new Student();
        //oneD = new int[](5);
        //twoD = new  typeOfElement[2];
        twoD = new  int[2][];
        twoD[0]=new int[3];
        twoD[1]=new int[5];
        //int val=0;
        int i,j;
        Random r = new Random();
        for(i=0;i<twoD.length ;i++) 
            for(j=0;j<twoD[i].length ;j++) 
                //twoD[i][j] = ++val;
                twoD[i][j] = r.nextInt(50);
        
        for(i=0;i<twoD.length ;i++) {
            for(j=0;j<twoD[i].length ;j++) 
                System.out.print(twoD[i][j]+" ");
            System.out.println();          
        }


        System.out.println("bye..");
    }    
}
