package com.tenpercent.strobe;

import android.content.Context;
import android.opengl.GLSurfaceView;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

public class MyGLSurfaceView extends GLSurfaceView
{
    public MyGLSurfaceView (Context context)
    {
        super(context);
        setRenderer(new Renderer());
    }

    private static class Renderer implements GLSurfaceView.Renderer {
        public void onDrawFrame(GL10 gl) {
            NativeWrapper.step();
        }

        public void onSurfaceChanged(GL10 gl, int width, int height) {
            NativeWrapper.init(width, height);
        }

        public void onSurfaceCreated(GL10 gl, EGLConfig config) {
            // Do nothing.
        }
    }
}
