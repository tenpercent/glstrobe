package com.tenpercent.strobe;

public class NativeWrapper
{
    static
    {
        System.loadLibrary("native-gl-strobe");
    }

    public native static void init(int width, int height);
    public native static void step();
}
