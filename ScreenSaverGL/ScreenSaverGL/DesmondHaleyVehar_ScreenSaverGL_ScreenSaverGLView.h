//
//  ScreenSaverGLView.h
//  ScreenSaverGL
//
//  Created by Desmond Vehar on 10/7/16.
//  Copyright (c) 2016 Desmond Vehar. All rights reserved.
//

#import <ScreenSaver/ScreenSaver.h>
#import <OpenGL/gl.h>
#import <OpenGL/glu.h>

#import "DesmondHaleyVehar_ScreenSaverGL_MyOpenGLView.h"

@interface DesmondHaleyVehar_ScreenSaverGL_ScreenSaverGLView : ScreenSaverView
{
    MyOpenGLView *glView;
    GLfloat rotation;
}

- (void)setUpOpenGL;

@end
