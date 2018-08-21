//
//  OpenGL.h
//  GPUImage
//
//  Created by Scott Kyle on 8/21/18.
//  Copyright © 2018 AutoLotto. All rights reserved.
//

#ifndef _OpenGL_h
#define _OpenGL_h

#ifdef __APPLE__
# include <TargetConditionals.h>
# if TARGET_OS_IPHONE || TARGET_OS_SIMULATOR
#  include <OpenGLES/ES1/gl.h>
#  include <OpenGLES/ES2/gl.h>
#  include <OpenGLES/ES2/glext.h>
# else
#  include <OpenGL/gl.h>
# endif
#else // !defined (__APPLE__)
# include <GLES2/gl2.h>
#endif

#include <EGL/egl.h>

#endif // _OpenGL_h
