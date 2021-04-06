package dummypkg;

import java.util.Random;

public class MyRandom extends Random{
    public byte nextByte(){
        byte b = 'A';
        return b;
    }
}
