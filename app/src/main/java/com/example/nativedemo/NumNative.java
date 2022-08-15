package com.example.nativedemo;

public class NumNative {

    static {
        System.loadLibrary("num");
    }

    public native int getSumFromC(int age,int high);

}
