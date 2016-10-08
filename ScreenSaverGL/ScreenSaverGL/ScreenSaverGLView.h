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

#import "MyOpenGLView.h"

@interface ScreenSaverGLView : ScreenSaverView
{
    MyOpenGLView *glView;
    GLfloat rotation;
}

- (void)setUpOpenGL;

@end
