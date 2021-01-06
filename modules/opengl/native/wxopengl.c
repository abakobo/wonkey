
#define GLAPI

#include "wxopengl.h"

#include <stdio.h>

void *SDL_GL_GetProcAddress( const char *proc );

int SDL_GL_ExtensionSupported( const char *ext );

int SDL_GL_GetAttribute( int attr,int *value );

#if __EMSCRIPTEN__

void GLAPIENTRY glClearDepthf( GLclampf depth );

void GLAPIENTRY wxglClearDepth( GLclampd depth ){

	glClearDepthf( (GLclampf)depth );
}

#else

#define SDL_GL_CONTEXT_PROFILE_MASK		21
#define SDL_GL_CONTEXT_PROFILE_ES		0x0004 

void (GLAPIENTRY*wxglClearDepthf)( GLclampf depth );

void GLAPIENTRY wxglClearDepthd( GLclampd depth ){

	wxglClearDepthf( (GLclampf)depth );
}

#endif

void wxglInit(){

#if __EMSCRIPTEN__

	WXGL_ES=1;

	WXGL_draw_buffers=SDL_GL_ExtensionSupported( "GL_WEBGL_draw_buffers" );
		
#else

	wxglAccum=SDL_GL_GetProcAddress("glAccum");
	wxglAlphaFunc=SDL_GL_GetProcAddress("glAlphaFunc");
	wxglAreTexturesResident=SDL_GL_GetProcAddress("glAreTexturesResident");
	wxglArrayElement=SDL_GL_GetProcAddress("glArrayElement");
	wxglBegin=SDL_GL_GetProcAddress("glBegin");
	wxglBindTexture=SDL_GL_GetProcAddress("glBindTexture");
	wxglBitmap=SDL_GL_GetProcAddress("glBitmap");
	wxglBlendFunc=SDL_GL_GetProcAddress("glBlendFunc");
	wxglCallList=SDL_GL_GetProcAddress("glCallList");
	wxglCallLists=SDL_GL_GetProcAddress("glCallLists");
	wxglClear=SDL_GL_GetProcAddress("glClear");
	wxglClearAccum=SDL_GL_GetProcAddress("glClearAccum");
	wxglClearColor=SDL_GL_GetProcAddress("glClearColor");
	wxglClearDepth=SDL_GL_GetProcAddress("glClearDepth");
	wxglClearIndex=SDL_GL_GetProcAddress("glClearIndex");
	wxglClearStencil=SDL_GL_GetProcAddress("glClearStencil");
	wxglClipPlane=SDL_GL_GetProcAddress("glClipPlane");
	wxglColor3b=SDL_GL_GetProcAddress("glColor3b");
	wxglColor3bv=SDL_GL_GetProcAddress("glColor3bv");
	wxglColor3d=SDL_GL_GetProcAddress("glColor3d");
	wxglColor3dv=SDL_GL_GetProcAddress("glColor3dv");
	wxglColor3f=SDL_GL_GetProcAddress("glColor3f");
	wxglColor3fv=SDL_GL_GetProcAddress("glColor3fv");
	wxglColor3i=SDL_GL_GetProcAddress("glColor3i");
	wxglColor3iv=SDL_GL_GetProcAddress("glColor3iv");
	wxglColor3s=SDL_GL_GetProcAddress("glColor3s");
	wxglColor3sv=SDL_GL_GetProcAddress("glColor3sv");
	wxglColor3ub=SDL_GL_GetProcAddress("glColor3ub");
	wxglColor3ubv=SDL_GL_GetProcAddress("glColor3ubv");
	wxglColor3ui=SDL_GL_GetProcAddress("glColor3ui");
	wxglColor3uiv=SDL_GL_GetProcAddress("glColor3uiv");
	wxglColor3us=SDL_GL_GetProcAddress("glColor3us");
	wxglColor3usv=SDL_GL_GetProcAddress("glColor3usv");
	wxglColor4b=SDL_GL_GetProcAddress("glColor4b");
	wxglColor4bv=SDL_GL_GetProcAddress("glColor4bv");
	wxglColor4d=SDL_GL_GetProcAddress("glColor4d");
	wxglColor4dv=SDL_GL_GetProcAddress("glColor4dv");
	wxglColor4f=SDL_GL_GetProcAddress("glColor4f");
	wxglColor4fv=SDL_GL_GetProcAddress("glColor4fv");
	wxglColor4i=SDL_GL_GetProcAddress("glColor4i");
	wxglColor4iv=SDL_GL_GetProcAddress("glColor4iv");
	wxglColor4s=SDL_GL_GetProcAddress("glColor4s");
	wxglColor4sv=SDL_GL_GetProcAddress("glColor4sv");
	wxglColor4ub=SDL_GL_GetProcAddress("glColor4ub");
	wxglColor4ubv=SDL_GL_GetProcAddress("glColor4ubv");
	wxglColor4ui=SDL_GL_GetProcAddress("glColor4ui");
	wxglColor4uiv=SDL_GL_GetProcAddress("glColor4uiv");
	wxglColor4us=SDL_GL_GetProcAddress("glColor4us");
	wxglColor4usv=SDL_GL_GetProcAddress("glColor4usv");
	wxglColorMask=SDL_GL_GetProcAddress("glColorMask");
	wxglColorMaterial=SDL_GL_GetProcAddress("glColorMaterial");
	wxglColorPointer=SDL_GL_GetProcAddress("glColorPointer");
	wxglCopyPixels=SDL_GL_GetProcAddress("glCopyPixels");
	wxglCopyTexImage1D=SDL_GL_GetProcAddress("glCopyTexImage1D");
	wxglCopyTexImage2D=SDL_GL_GetProcAddress("glCopyTexImage2D");
	wxglCopyTexSubImage1D=SDL_GL_GetProcAddress("glCopyTexSubImage1D");
	wxglCopyTexSubImage2D=SDL_GL_GetProcAddress("glCopyTexSubImage2D");
	wxglCullFace=SDL_GL_GetProcAddress("glCullFace");
	wxglDeleteLists=SDL_GL_GetProcAddress("glDeleteLists");
	wxglDeleteTextures=SDL_GL_GetProcAddress("glDeleteTextures");
	wxglDepthFunc=SDL_GL_GetProcAddress("glDepthFunc");
	wxglDepthMask=SDL_GL_GetProcAddress("glDepthMask");
	wxglDepthRange=SDL_GL_GetProcAddress("glDepthRange");
	wxglDisable=SDL_GL_GetProcAddress("glDisable");
	wxglDisableClientState=SDL_GL_GetProcAddress("glDisableClientState");
	wxglDrawArrays=SDL_GL_GetProcAddress("glDrawArrays");
	wxglDrawBuffer=SDL_GL_GetProcAddress("glDrawBuffer");
	wxglDrawElements=SDL_GL_GetProcAddress("glDrawElements");
	wxglDrawPixels=SDL_GL_GetProcAddress("glDrawPixels");
	wxglEdgeFlag=SDL_GL_GetProcAddress("glEdgeFlag");
	wxglEdgeFlagPointer=SDL_GL_GetProcAddress("glEdgeFlagPointer");
	wxglEdgeFlagv=SDL_GL_GetProcAddress("glEdgeFlagv");
	wxglEnable=SDL_GL_GetProcAddress("glEnable");
	wxglEnableClientState=SDL_GL_GetProcAddress("glEnableClientState");
	wxglEnd=SDL_GL_GetProcAddress("glEnd");
	wxglEndList=SDL_GL_GetProcAddress("glEndList");
	wxglEvalCoord1d=SDL_GL_GetProcAddress("glEvalCoord1d");
	wxglEvalCoord1dv=SDL_GL_GetProcAddress("glEvalCoord1dv");
	wxglEvalCoord1f=SDL_GL_GetProcAddress("glEvalCoord1f");
	wxglEvalCoord1fv=SDL_GL_GetProcAddress("glEvalCoord1fv");
	wxglEvalCoord2d=SDL_GL_GetProcAddress("glEvalCoord2d");
	wxglEvalCoord2dv=SDL_GL_GetProcAddress("glEvalCoord2dv");
	wxglEvalCoord2f=SDL_GL_GetProcAddress("glEvalCoord2f");
	wxglEvalCoord2fv=SDL_GL_GetProcAddress("glEvalCoord2fv");
	wxglEvalMesh1=SDL_GL_GetProcAddress("glEvalMesh1");
	wxglEvalMesh2=SDL_GL_GetProcAddress("glEvalMesh2");
	wxglEvalPoint1=SDL_GL_GetProcAddress("glEvalPoint1");
	wxglEvalPoint2=SDL_GL_GetProcAddress("glEvalPoint2");
	wxglFeedbackBuffer=SDL_GL_GetProcAddress("glFeedbackBuffer");
	wxglFinish=SDL_GL_GetProcAddress("glFinish");
	wxglFlush=SDL_GL_GetProcAddress("glFlush");
	wxglFogf=SDL_GL_GetProcAddress("glFogf");
	wxglFogfv=SDL_GL_GetProcAddress("glFogfv");
	wxglFogi=SDL_GL_GetProcAddress("glFogi");
	wxglFogiv=SDL_GL_GetProcAddress("glFogiv");
	wxglFrontFace=SDL_GL_GetProcAddress("glFrontFace");
	wxglFrustum=SDL_GL_GetProcAddress("glFrustum");
	wxglGenLists=SDL_GL_GetProcAddress("glGenLists");
	wxglGenTextures=SDL_GL_GetProcAddress("glGenTextures");
	wxglGetBooleanv=SDL_GL_GetProcAddress("glGetBooleanv");
	wxglGetClipPlane=SDL_GL_GetProcAddress("glGetClipPlane");
	wxglGetDoublev=SDL_GL_GetProcAddress("glGetDoublev");
	wxglGetError=SDL_GL_GetProcAddress("glGetError");
	wxglGetFloatv=SDL_GL_GetProcAddress("glGetFloatv");
	wxglGetIntegerv=SDL_GL_GetProcAddress("glGetIntegerv");
	wxglGetLightfv=SDL_GL_GetProcAddress("glGetLightfv");
	wxglGetLightiv=SDL_GL_GetProcAddress("glGetLightiv");
	wxglGetMapdv=SDL_GL_GetProcAddress("glGetMapdv");
	wxglGetMapfv=SDL_GL_GetProcAddress("glGetMapfv");
	wxglGetMapiv=SDL_GL_GetProcAddress("glGetMapiv");
	wxglGetMaterialfv=SDL_GL_GetProcAddress("glGetMaterialfv");
	wxglGetMaterialiv=SDL_GL_GetProcAddress("glGetMaterialiv");
	wxglGetPixelMapfv=SDL_GL_GetProcAddress("glGetPixelMapfv");
	wxglGetPixelMapuiv=SDL_GL_GetProcAddress("glGetPixelMapuiv");
	wxglGetPixelMapusv=SDL_GL_GetProcAddress("glGetPixelMapusv");
	wxglGetPointerv=SDL_GL_GetProcAddress("glGetPointerv");
	wxglGetPolygonStipple=SDL_GL_GetProcAddress("glGetPolygonStipple");
	wxglGetString=SDL_GL_GetProcAddress("glGetString");
	wxglGetTexEnvfv=SDL_GL_GetProcAddress("glGetTexEnvfv");
	wxglGetTexEnviv=SDL_GL_GetProcAddress("glGetTexEnviv");
	wxglGetTexGendv=SDL_GL_GetProcAddress("glGetTexGendv");
	wxglGetTexGenfv=SDL_GL_GetProcAddress("glGetTexGenfv");
	wxglGetTexGeniv=SDL_GL_GetProcAddress("glGetTexGeniv");
	wxglGetTexImage=SDL_GL_GetProcAddress("glGetTexImage");
	wxglGetTexLevelParameterfv=SDL_GL_GetProcAddress("glGetTexLevelParameterfv");
	wxglGetTexLevelParameteriv=SDL_GL_GetProcAddress("glGetTexLevelParameteriv");
	wxglGetTexParameterfv=SDL_GL_GetProcAddress("glGetTexParameterfv");
	wxglGetTexParameteriv=SDL_GL_GetProcAddress("glGetTexParameteriv");
	wxglHint=SDL_GL_GetProcAddress("glHint");
	wxglIndexMask=SDL_GL_GetProcAddress("glIndexMask");
	wxglIndexPointer=SDL_GL_GetProcAddress("glIndexPointer");
	wxglIndexd=SDL_GL_GetProcAddress("glIndexd");
	wxglIndexdv=SDL_GL_GetProcAddress("glIndexdv");
	wxglIndexf=SDL_GL_GetProcAddress("glIndexf");
	wxglIndexfv=SDL_GL_GetProcAddress("glIndexfv");
	wxglIndexi=SDL_GL_GetProcAddress("glIndexi");
	wxglIndexiv=SDL_GL_GetProcAddress("glIndexiv");
	wxglIndexs=SDL_GL_GetProcAddress("glIndexs");
	wxglIndexsv=SDL_GL_GetProcAddress("glIndexsv");
	wxglIndexub=SDL_GL_GetProcAddress("glIndexub");
	wxglIndexubv=SDL_GL_GetProcAddress("glIndexubv");
	wxglInitNames=SDL_GL_GetProcAddress("glInitNames");
	wxglInterleavedArrays=SDL_GL_GetProcAddress("glInterleavedArrays");
	wxglIsEnabled=SDL_GL_GetProcAddress("glIsEnabled");
	wxglIsList=SDL_GL_GetProcAddress("glIsList");
	wxglIsTexture=SDL_GL_GetProcAddress("glIsTexture");
	wxglLightModelf=SDL_GL_GetProcAddress("glLightModelf");
	wxglLightModelfv=SDL_GL_GetProcAddress("glLightModelfv");
	wxglLightModeli=SDL_GL_GetProcAddress("glLightModeli");
	wxglLightModeliv=SDL_GL_GetProcAddress("glLightModeliv");
	wxglLightf=SDL_GL_GetProcAddress("glLightf");
	wxglLightfv=SDL_GL_GetProcAddress("glLightfv");
	wxglLighti=SDL_GL_GetProcAddress("glLighti");
	wxglLightiv=SDL_GL_GetProcAddress("glLightiv");
	wxglLineStipple=SDL_GL_GetProcAddress("glLineStipple");
	wxglLineWidth=SDL_GL_GetProcAddress("glLineWidth");
	wxglListBase=SDL_GL_GetProcAddress("glListBase");
	wxglLoadIdentity=SDL_GL_GetProcAddress("glLoadIdentity");
	wxglLoadMatrixd=SDL_GL_GetProcAddress("glLoadMatrixd");
	wxglLoadMatrixf=SDL_GL_GetProcAddress("glLoadMatrixf");
	wxglLoadName=SDL_GL_GetProcAddress("glLoadName");
	wxglLogicOp=SDL_GL_GetProcAddress("glLogicOp");
	wxglMap1d=SDL_GL_GetProcAddress("glMap1d");
	wxglMap1f=SDL_GL_GetProcAddress("glMap1f");
	wxglMap2d=SDL_GL_GetProcAddress("glMap2d");
	wxglMap2f=SDL_GL_GetProcAddress("glMap2f");
	wxglMapGrid1d=SDL_GL_GetProcAddress("glMapGrid1d");
	wxglMapGrid1f=SDL_GL_GetProcAddress("glMapGrid1f");
	wxglMapGrid2d=SDL_GL_GetProcAddress("glMapGrid2d");
	wxglMapGrid2f=SDL_GL_GetProcAddress("glMapGrid2f");
	wxglMaterialf=SDL_GL_GetProcAddress("glMaterialf");
	wxglMaterialfv=SDL_GL_GetProcAddress("glMaterialfv");
	wxglMateriali=SDL_GL_GetProcAddress("glMateriali");
	wxglMaterialiv=SDL_GL_GetProcAddress("glMaterialiv");
	wxglMatrixMode=SDL_GL_GetProcAddress("glMatrixMode");
	wxglMultMatrixd=SDL_GL_GetProcAddress("glMultMatrixd");
	wxglMultMatrixf=SDL_GL_GetProcAddress("glMultMatrixf");
	wxglNewList=SDL_GL_GetProcAddress("glNewList");
	wxglNormal3b=SDL_GL_GetProcAddress("glNormal3b");
	wxglNormal3bv=SDL_GL_GetProcAddress("glNormal3bv");
	wxglNormal3d=SDL_GL_GetProcAddress("glNormal3d");
	wxglNormal3dv=SDL_GL_GetProcAddress("glNormal3dv");
	wxglNormal3f=SDL_GL_GetProcAddress("glNormal3f");
	wxglNormal3fv=SDL_GL_GetProcAddress("glNormal3fv");
	wxglNormal3i=SDL_GL_GetProcAddress("glNormal3i");
	wxglNormal3iv=SDL_GL_GetProcAddress("glNormal3iv");
	wxglNormal3s=SDL_GL_GetProcAddress("glNormal3s");
	wxglNormal3sv=SDL_GL_GetProcAddress("glNormal3sv");
	wxglNormalPointer=SDL_GL_GetProcAddress("glNormalPointer");
	wxglOrtho=SDL_GL_GetProcAddress("glOrtho");
	wxglPassThrough=SDL_GL_GetProcAddress("glPassThrough");
	wxglPixelMapfv=SDL_GL_GetProcAddress("glPixelMapfv");
	wxglPixelMapuiv=SDL_GL_GetProcAddress("glPixelMapuiv");
	wxglPixelMapusv=SDL_GL_GetProcAddress("glPixelMapusv");
	wxglPixelStoref=SDL_GL_GetProcAddress("glPixelStoref");
	wxglPixelStorei=SDL_GL_GetProcAddress("glPixelStorei");
	wxglPixelTransferf=SDL_GL_GetProcAddress("glPixelTransferf");
	wxglPixelTransferi=SDL_GL_GetProcAddress("glPixelTransferi");
	wxglPixelZoom=SDL_GL_GetProcAddress("glPixelZoom");
	wxglPointSize=SDL_GL_GetProcAddress("glPointSize");
	wxglPolygonMode=SDL_GL_GetProcAddress("glPolygonMode");
	wxglPolygonOffset=SDL_GL_GetProcAddress("glPolygonOffset");
	wxglPolygonStipple=SDL_GL_GetProcAddress("glPolygonStipple");
	wxglPopAttrib=SDL_GL_GetProcAddress("glPopAttrib");
	wxglPopClientAttrib=SDL_GL_GetProcAddress("glPopClientAttrib");
	wxglPopMatrix=SDL_GL_GetProcAddress("glPopMatrix");
	wxglPopName=SDL_GL_GetProcAddress("glPopName");
	wxglPrioritizeTextures=SDL_GL_GetProcAddress("glPrioritizeTextures");
	wxglPushAttrib=SDL_GL_GetProcAddress("glPushAttrib");
	wxglPushClientAttrib=SDL_GL_GetProcAddress("glPushClientAttrib");
	wxglPushMatrix=SDL_GL_GetProcAddress("glPushMatrix");
	wxglPushName=SDL_GL_GetProcAddress("glPushName");
	wxglRasterPos2d=SDL_GL_GetProcAddress("glRasterPos2d");
	wxglRasterPos2dv=SDL_GL_GetProcAddress("glRasterPos2dv");
	wxglRasterPos2f=SDL_GL_GetProcAddress("glRasterPos2f");
	wxglRasterPos2fv=SDL_GL_GetProcAddress("glRasterPos2fv");
	wxglRasterPos2i=SDL_GL_GetProcAddress("glRasterPos2i");
	wxglRasterPos2iv=SDL_GL_GetProcAddress("glRasterPos2iv");
	wxglRasterPos2s=SDL_GL_GetProcAddress("glRasterPos2s");
	wxglRasterPos2sv=SDL_GL_GetProcAddress("glRasterPos2sv");
	wxglRasterPos3d=SDL_GL_GetProcAddress("glRasterPos3d");
	wxglRasterPos3dv=SDL_GL_GetProcAddress("glRasterPos3dv");
	wxglRasterPos3f=SDL_GL_GetProcAddress("glRasterPos3f");
	wxglRasterPos3fv=SDL_GL_GetProcAddress("glRasterPos3fv");
	wxglRasterPos3i=SDL_GL_GetProcAddress("glRasterPos3i");
	wxglRasterPos3iv=SDL_GL_GetProcAddress("glRasterPos3iv");
	wxglRasterPos3s=SDL_GL_GetProcAddress("glRasterPos3s");
	wxglRasterPos3sv=SDL_GL_GetProcAddress("glRasterPos3sv");
	wxglRasterPos4d=SDL_GL_GetProcAddress("glRasterPos4d");
	wxglRasterPos4dv=SDL_GL_GetProcAddress("glRasterPos4dv");
	wxglRasterPos4f=SDL_GL_GetProcAddress("glRasterPos4f");
	wxglRasterPos4fv=SDL_GL_GetProcAddress("glRasterPos4fv");
	wxglRasterPos4i=SDL_GL_GetProcAddress("glRasterPos4i");
	wxglRasterPos4iv=SDL_GL_GetProcAddress("glRasterPos4iv");
	wxglRasterPos4s=SDL_GL_GetProcAddress("glRasterPos4s");
	wxglRasterPos4sv=SDL_GL_GetProcAddress("glRasterPos4sv");
	wxglReadBuffer=SDL_GL_GetProcAddress("glReadBuffer");
	wxglReadPixels=SDL_GL_GetProcAddress("glReadPixels");
	wxglRectd=SDL_GL_GetProcAddress("glRectd");
	wxglRectdv=SDL_GL_GetProcAddress("glRectdv");
	wxglRectf=SDL_GL_GetProcAddress("glRectf");
	wxglRectfv=SDL_GL_GetProcAddress("glRectfv");
	wxglRecti=SDL_GL_GetProcAddress("glRecti");
	wxglRectiv=SDL_GL_GetProcAddress("glRectiv");
	wxglRects=SDL_GL_GetProcAddress("glRects");
	wxglRectsv=SDL_GL_GetProcAddress("glRectsv");
	wxglRenderMode=SDL_GL_GetProcAddress("glRenderMode");
	wxglRotated=SDL_GL_GetProcAddress("glRotated");
	wxglRotatef=SDL_GL_GetProcAddress("glRotatef");
	wxglScaled=SDL_GL_GetProcAddress("glScaled");
	wxglScalef=SDL_GL_GetProcAddress("glScalef");
	wxglScissor=SDL_GL_GetProcAddress("glScissor");
	wxglSelectBuffer=SDL_GL_GetProcAddress("glSelectBuffer");
	wxglShadeModel=SDL_GL_GetProcAddress("glShadeModel");
	wxglStencilFunc=SDL_GL_GetProcAddress("glStencilFunc");
	wxglStencilMask=SDL_GL_GetProcAddress("glStencilMask");
	wxglStencilOp=SDL_GL_GetProcAddress("glStencilOp");
	wxglTexCoord1d=SDL_GL_GetProcAddress("glTexCoord1d");
	wxglTexCoord1dv=SDL_GL_GetProcAddress("glTexCoord1dv");
	wxglTexCoord1f=SDL_GL_GetProcAddress("glTexCoord1f");
	wxglTexCoord1fv=SDL_GL_GetProcAddress("glTexCoord1fv");
	wxglTexCoord1i=SDL_GL_GetProcAddress("glTexCoord1i");
	wxglTexCoord1iv=SDL_GL_GetProcAddress("glTexCoord1iv");
	wxglTexCoord1s=SDL_GL_GetProcAddress("glTexCoord1s");
	wxglTexCoord1sv=SDL_GL_GetProcAddress("glTexCoord1sv");
	wxglTexCoord2d=SDL_GL_GetProcAddress("glTexCoord2d");
	wxglTexCoord2dv=SDL_GL_GetProcAddress("glTexCoord2dv");
	wxglTexCoord2f=SDL_GL_GetProcAddress("glTexCoord2f");
	wxglTexCoord2fv=SDL_GL_GetProcAddress("glTexCoord2fv");
	wxglTexCoord2i=SDL_GL_GetProcAddress("glTexCoord2i");
	wxglTexCoord2iv=SDL_GL_GetProcAddress("glTexCoord2iv");
	wxglTexCoord2s=SDL_GL_GetProcAddress("glTexCoord2s");
	wxglTexCoord2sv=SDL_GL_GetProcAddress("glTexCoord2sv");
	wxglTexCoord3d=SDL_GL_GetProcAddress("glTexCoord3d");
	wxglTexCoord3dv=SDL_GL_GetProcAddress("glTexCoord3dv");
	wxglTexCoord3f=SDL_GL_GetProcAddress("glTexCoord3f");
	wxglTexCoord3fv=SDL_GL_GetProcAddress("glTexCoord3fv");
	wxglTexCoord3i=SDL_GL_GetProcAddress("glTexCoord3i");
	wxglTexCoord3iv=SDL_GL_GetProcAddress("glTexCoord3iv");
	wxglTexCoord3s=SDL_GL_GetProcAddress("glTexCoord3s");
	wxglTexCoord3sv=SDL_GL_GetProcAddress("glTexCoord3sv");
	wxglTexCoord4d=SDL_GL_GetProcAddress("glTexCoord4d");
	wxglTexCoord4dv=SDL_GL_GetProcAddress("glTexCoord4dv");
	wxglTexCoord4f=SDL_GL_GetProcAddress("glTexCoord4f");
	wxglTexCoord4fv=SDL_GL_GetProcAddress("glTexCoord4fv");
	wxglTexCoord4i=SDL_GL_GetProcAddress("glTexCoord4i");
	wxglTexCoord4iv=SDL_GL_GetProcAddress("glTexCoord4iv");
	wxglTexCoord4s=SDL_GL_GetProcAddress("glTexCoord4s");
	wxglTexCoord4sv=SDL_GL_GetProcAddress("glTexCoord4sv");
	wxglTexCoordPointer=SDL_GL_GetProcAddress("glTexCoordPointer");
	wxglTexEnvf=SDL_GL_GetProcAddress("glTexEnvf");
	wxglTexEnvfv=SDL_GL_GetProcAddress("glTexEnvfv");
	wxglTexEnvi=SDL_GL_GetProcAddress("glTexEnvi");
	wxglTexEnviv=SDL_GL_GetProcAddress("glTexEnviv");
	wxglTexGend=SDL_GL_GetProcAddress("glTexGend");
	wxglTexGendv=SDL_GL_GetProcAddress("glTexGendv");
	wxglTexGenf=SDL_GL_GetProcAddress("glTexGenf");
	wxglTexGenfv=SDL_GL_GetProcAddress("glTexGenfv");
	wxglTexGeni=SDL_GL_GetProcAddress("glTexGeni");
	wxglTexGeniv=SDL_GL_GetProcAddress("glTexGeniv");
	wxglTexImage1D=SDL_GL_GetProcAddress("glTexImage1D");
	wxglTexImage2D=SDL_GL_GetProcAddress("glTexImage2D");
	wxglTexParameterf=SDL_GL_GetProcAddress("glTexParameterf");
	wxglTexParameterfv=SDL_GL_GetProcAddress("glTexParameterfv");
	wxglTexParameteri=SDL_GL_GetProcAddress("glTexParameteri");
	wxglTexParameteriv=SDL_GL_GetProcAddress("glTexParameteriv");
	wxglTexSubImage1D=SDL_GL_GetProcAddress("glTexSubImage1D");
	wxglTexSubImage2D=SDL_GL_GetProcAddress("glTexSubImage2D");
	wxglTranslated=SDL_GL_GetProcAddress("glTranslated");
	wxglTranslatef=SDL_GL_GetProcAddress("glTranslatef");
	wxglVertex2d=SDL_GL_GetProcAddress("glVertex2d");
	wxglVertex2dv=SDL_GL_GetProcAddress("glVertex2dv");
	wxglVertex2f=SDL_GL_GetProcAddress("glVertex2f");
	wxglVertex2fv=SDL_GL_GetProcAddress("glVertex2fv");
	wxglVertex2i=SDL_GL_GetProcAddress("glVertex2i");
	wxglVertex2iv=SDL_GL_GetProcAddress("glVertex2iv");
	wxglVertex2s=SDL_GL_GetProcAddress("glVertex2s");
	wxglVertex2sv=SDL_GL_GetProcAddress("glVertex2sv");
	wxglVertex3d=SDL_GL_GetProcAddress("glVertex3d");
	wxglVertex3dv=SDL_GL_GetProcAddress("glVertex3dv");
	wxglVertex3f=SDL_GL_GetProcAddress("glVertex3f");
	wxglVertex3fv=SDL_GL_GetProcAddress("glVertex3fv");
	wxglVertex3i=SDL_GL_GetProcAddress("glVertex3i");
	wxglVertex3iv=SDL_GL_GetProcAddress("glVertex3iv");
	wxglVertex3s=SDL_GL_GetProcAddress("glVertex3s");
	wxglVertex3sv=SDL_GL_GetProcAddress("glVertex3sv");
	wxglVertex4d=SDL_GL_GetProcAddress("glVertex4d");
	wxglVertex4dv=SDL_GL_GetProcAddress("glVertex4dv");
	wxglVertex4f=SDL_GL_GetProcAddress("glVertex4f");
	wxglVertex4fv=SDL_GL_GetProcAddress("glVertex4fv");
	wxglVertex4i=SDL_GL_GetProcAddress("glVertex4i");
	wxglVertex4iv=SDL_GL_GetProcAddress("glVertex4iv");
	wxglVertex4s=SDL_GL_GetProcAddress("glVertex4s");
	wxglVertex4sv=SDL_GL_GetProcAddress("glVertex4sv");
	wxglVertexPointer=SDL_GL_GetProcAddress("glVertexPointer");
	wxglViewport=SDL_GL_GetProcAddress("glViewport");
	wxglCopyTexSubImage3D=SDL_GL_GetProcAddress("glCopyTexSubImage3D");
	wxglDrawRangeElements=SDL_GL_GetProcAddress("glDrawRangeElements");
	wxglTexImage3D=SDL_GL_GetProcAddress("glTexImage3D");
	wxglTexSubImage3D=SDL_GL_GetProcAddress("glTexSubImage3D");
	wxglActiveTexture=SDL_GL_GetProcAddress("glActiveTexture");
	wxglClientActiveTexture=SDL_GL_GetProcAddress("glClientActiveTexture");
	wxglCompressedTexImage1D=SDL_GL_GetProcAddress("glCompressedTexImage1D");
	wxglCompressedTexImage2D=SDL_GL_GetProcAddress("glCompressedTexImage2D");
	wxglCompressedTexImage3D=SDL_GL_GetProcAddress("glCompressedTexImage3D");
	wxglCompressedTexSubImage1D=SDL_GL_GetProcAddress("glCompressedTexSubImage1D");
	wxglCompressedTexSubImage2D=SDL_GL_GetProcAddress("glCompressedTexSubImage2D");
	wxglCompressedTexSubImage3D=SDL_GL_GetProcAddress("glCompressedTexSubImage3D");
	wxglGetCompressedTexImage=SDL_GL_GetProcAddress("glGetCompressedTexImage");
	wxglLoadTransposeMatrixd=SDL_GL_GetProcAddress("glLoadTransposeMatrixd");
	wxglLoadTransposeMatrixf=SDL_GL_GetProcAddress("glLoadTransposeMatrixf");
	wxglMultTransposeMatrixd=SDL_GL_GetProcAddress("glMultTransposeMatrixd");
	wxglMultTransposeMatrixf=SDL_GL_GetProcAddress("glMultTransposeMatrixf");
	wxglMultiTexCoord1d=SDL_GL_GetProcAddress("glMultiTexCoord1d");
	wxglMultiTexCoord1dv=SDL_GL_GetProcAddress("glMultiTexCoord1dv");
	wxglMultiTexCoord1f=SDL_GL_GetProcAddress("glMultiTexCoord1f");
	wxglMultiTexCoord1fv=SDL_GL_GetProcAddress("glMultiTexCoord1fv");
	wxglMultiTexCoord1i=SDL_GL_GetProcAddress("glMultiTexCoord1i");
	wxglMultiTexCoord1iv=SDL_GL_GetProcAddress("glMultiTexCoord1iv");
	wxglMultiTexCoord1s=SDL_GL_GetProcAddress("glMultiTexCoord1s");
	wxglMultiTexCoord1sv=SDL_GL_GetProcAddress("glMultiTexCoord1sv");
	wxglMultiTexCoord2d=SDL_GL_GetProcAddress("glMultiTexCoord2d");
	wxglMultiTexCoord2dv=SDL_GL_GetProcAddress("glMultiTexCoord2dv");
	wxglMultiTexCoord2f=SDL_GL_GetProcAddress("glMultiTexCoord2f");
	wxglMultiTexCoord2fv=SDL_GL_GetProcAddress("glMultiTexCoord2fv");
	wxglMultiTexCoord2i=SDL_GL_GetProcAddress("glMultiTexCoord2i");
	wxglMultiTexCoord2iv=SDL_GL_GetProcAddress("glMultiTexCoord2iv");
	wxglMultiTexCoord2s=SDL_GL_GetProcAddress("glMultiTexCoord2s");
	wxglMultiTexCoord2sv=SDL_GL_GetProcAddress("glMultiTexCoord2sv");
	wxglMultiTexCoord3d=SDL_GL_GetProcAddress("glMultiTexCoord3d");
	wxglMultiTexCoord3dv=SDL_GL_GetProcAddress("glMultiTexCoord3dv");
	wxglMultiTexCoord3f=SDL_GL_GetProcAddress("glMultiTexCoord3f");
	wxglMultiTexCoord3fv=SDL_GL_GetProcAddress("glMultiTexCoord3fv");
	wxglMultiTexCoord3i=SDL_GL_GetProcAddress("glMultiTexCoord3i");
	wxglMultiTexCoord3iv=SDL_GL_GetProcAddress("glMultiTexCoord3iv");
	wxglMultiTexCoord3s=SDL_GL_GetProcAddress("glMultiTexCoord3s");
	wxglMultiTexCoord3sv=SDL_GL_GetProcAddress("glMultiTexCoord3sv");
	wxglMultiTexCoord4d=SDL_GL_GetProcAddress("glMultiTexCoord4d");
	wxglMultiTexCoord4dv=SDL_GL_GetProcAddress("glMultiTexCoord4dv");
	wxglMultiTexCoord4f=SDL_GL_GetProcAddress("glMultiTexCoord4f");
	wxglMultiTexCoord4fv=SDL_GL_GetProcAddress("glMultiTexCoord4fv");
	wxglMultiTexCoord4i=SDL_GL_GetProcAddress("glMultiTexCoord4i");
	wxglMultiTexCoord4iv=SDL_GL_GetProcAddress("glMultiTexCoord4iv");
	wxglMultiTexCoord4s=SDL_GL_GetProcAddress("glMultiTexCoord4s");
	wxglMultiTexCoord4sv=SDL_GL_GetProcAddress("glMultiTexCoord4sv");
	wxglSampleCoverage=SDL_GL_GetProcAddress("glSampleCoverage");
	wxglBlendColor=SDL_GL_GetProcAddress("glBlendColor");
	wxglBlendEquation=SDL_GL_GetProcAddress("glBlendEquation");
	wxglBlendFuncSeparate=SDL_GL_GetProcAddress("glBlendFuncSeparate");
	wxglFogCoordPointer=SDL_GL_GetProcAddress("glFogCoordPointer");
	wxglFogCoordd=SDL_GL_GetProcAddress("glFogCoordd");
	wxglFogCoorddv=SDL_GL_GetProcAddress("glFogCoorddv");
	wxglFogCoordf=SDL_GL_GetProcAddress("glFogCoordf");
	wxglFogCoordfv=SDL_GL_GetProcAddress("glFogCoordfv");
	wxglMultiDrawArrays=SDL_GL_GetProcAddress("glMultiDrawArrays");
	wxglMultiDrawElements=SDL_GL_GetProcAddress("glMultiDrawElements");
	wxglPointParameterf=SDL_GL_GetProcAddress("glPointParameterf");
	wxglPointParameterfv=SDL_GL_GetProcAddress("glPointParameterfv");
	wxglPointParameteri=SDL_GL_GetProcAddress("glPointParameteri");
	wxglPointParameteriv=SDL_GL_GetProcAddress("glPointParameteriv");
	wxglSecondaryColor3b=SDL_GL_GetProcAddress("glSecondaryColor3b");
	wxglSecondaryColor3bv=SDL_GL_GetProcAddress("glSecondaryColor3bv");
	wxglSecondaryColor3d=SDL_GL_GetProcAddress("glSecondaryColor3d");
	wxglSecondaryColor3dv=SDL_GL_GetProcAddress("glSecondaryColor3dv");
	wxglSecondaryColor3f=SDL_GL_GetProcAddress("glSecondaryColor3f");
	wxglSecondaryColor3fv=SDL_GL_GetProcAddress("glSecondaryColor3fv");
	wxglSecondaryColor3i=SDL_GL_GetProcAddress("glSecondaryColor3i");
	wxglSecondaryColor3iv=SDL_GL_GetProcAddress("glSecondaryColor3iv");
	wxglSecondaryColor3s=SDL_GL_GetProcAddress("glSecondaryColor3s");
	wxglSecondaryColor3sv=SDL_GL_GetProcAddress("glSecondaryColor3sv");
	wxglSecondaryColor3ub=SDL_GL_GetProcAddress("glSecondaryColor3ub");
	wxglSecondaryColor3ubv=SDL_GL_GetProcAddress("glSecondaryColor3ubv");
	wxglSecondaryColor3ui=SDL_GL_GetProcAddress("glSecondaryColor3ui");
	wxglSecondaryColor3uiv=SDL_GL_GetProcAddress("glSecondaryColor3uiv");
	wxglSecondaryColor3us=SDL_GL_GetProcAddress("glSecondaryColor3us");
	wxglSecondaryColor3usv=SDL_GL_GetProcAddress("glSecondaryColor3usv");
	wxglSecondaryColorPointer=SDL_GL_GetProcAddress("glSecondaryColorPointer");
	wxglWindowPos2d=SDL_GL_GetProcAddress("glWindowPos2d");
	wxglWindowPos2dv=SDL_GL_GetProcAddress("glWindowPos2dv");
	wxglWindowPos2f=SDL_GL_GetProcAddress("glWindowPos2f");
	wxglWindowPos2fv=SDL_GL_GetProcAddress("glWindowPos2fv");
	wxglWindowPos2i=SDL_GL_GetProcAddress("glWindowPos2i");
	wxglWindowPos2iv=SDL_GL_GetProcAddress("glWindowPos2iv");
	wxglWindowPos2s=SDL_GL_GetProcAddress("glWindowPos2s");
	wxglWindowPos2sv=SDL_GL_GetProcAddress("glWindowPos2sv");
	wxglWindowPos3d=SDL_GL_GetProcAddress("glWindowPos3d");
	wxglWindowPos3dv=SDL_GL_GetProcAddress("glWindowPos3dv");
	wxglWindowPos3f=SDL_GL_GetProcAddress("glWindowPos3f");
	wxglWindowPos3fv=SDL_GL_GetProcAddress("glWindowPos3fv");
	wxglWindowPos3i=SDL_GL_GetProcAddress("glWindowPos3i");
	wxglWindowPos3iv=SDL_GL_GetProcAddress("glWindowPos3iv");
	wxglWindowPos3s=SDL_GL_GetProcAddress("glWindowPos3s");
	wxglWindowPos3sv=SDL_GL_GetProcAddress("glWindowPos3sv");
	wxglBeginQuery=SDL_GL_GetProcAddress("glBeginQuery");
	wxglBindBuffer=SDL_GL_GetProcAddress("glBindBuffer");
	wxglBufferData=SDL_GL_GetProcAddress("glBufferData");
	wxglBufferSubData=SDL_GL_GetProcAddress("glBufferSubData");
	wxglDeleteBuffers=SDL_GL_GetProcAddress("glDeleteBuffers");
	wxglDeleteQueries=SDL_GL_GetProcAddress("glDeleteQueries");
	wxglEndQuery=SDL_GL_GetProcAddress("glEndQuery");
	wxglGenBuffers=SDL_GL_GetProcAddress("glGenBuffers");
	wxglGenQueries=SDL_GL_GetProcAddress("glGenQueries");
	wxglGetBufferParameteriv=SDL_GL_GetProcAddress("glGetBufferParameteriv");
	wxglGetBufferPointerv=SDL_GL_GetProcAddress("glGetBufferPointerv");
	wxglGetBufferSubData=SDL_GL_GetProcAddress("glGetBufferSubData");
	wxglGetQueryObjectiv=SDL_GL_GetProcAddress("glGetQueryObjectiv");
	wxglGetQueryObjectuiv=SDL_GL_GetProcAddress("glGetQueryObjectuiv");
	wxglGetQueryiv=SDL_GL_GetProcAddress("glGetQueryiv");
	wxglIsBuffer=SDL_GL_GetProcAddress("glIsBuffer");
	wxglIsQuery=SDL_GL_GetProcAddress("glIsQuery");
	wxglMapBuffer=SDL_GL_GetProcAddress("glMapBuffer");
	wxglUnmapBuffer=SDL_GL_GetProcAddress("glUnmapBuffer");
	wxglAttachShader=SDL_GL_GetProcAddress("glAttachShader");
	wxglBindAttribLocation=SDL_GL_GetProcAddress("glBindAttribLocation");
	wxglBlendEquationSeparate=SDL_GL_GetProcAddress("glBlendEquationSeparate");
	wxglCompileShader=SDL_GL_GetProcAddress("glCompileShader");
	wxglCreateProgram=SDL_GL_GetProcAddress("glCreateProgram");
	wxglCreateShader=SDL_GL_GetProcAddress("glCreateShader");
	wxglDeleteProgram=SDL_GL_GetProcAddress("glDeleteProgram");
	wxglDeleteShader=SDL_GL_GetProcAddress("glDeleteShader");
	wxglDetachShader=SDL_GL_GetProcAddress("glDetachShader");
	wxglDisableVertexAttribArray=SDL_GL_GetProcAddress("glDisableVertexAttribArray");
	wxglDrawBuffers=SDL_GL_GetProcAddress("glDrawBuffers");
	wxglEnableVertexAttribArray=SDL_GL_GetProcAddress("glEnableVertexAttribArray");
	wxglGetActiveAttrib=SDL_GL_GetProcAddress("glGetActiveAttrib");
	wxglGetActiveUniform=SDL_GL_GetProcAddress("glGetActiveUniform");
	wxglGetAttachedShaders=SDL_GL_GetProcAddress("glGetAttachedShaders");
	wxglGetAttribLocation=SDL_GL_GetProcAddress("glGetAttribLocation");
	wxglGetProgramInfoLog=SDL_GL_GetProcAddress("glGetProgramInfoLog");
	wxglGetProgramiv=SDL_GL_GetProcAddress("glGetProgramiv");
	wxglGetShaderInfoLog=SDL_GL_GetProcAddress("glGetShaderInfoLog");
	wxglGetShaderSource=SDL_GL_GetProcAddress("glGetShaderSource");
	wxglGetShaderiv=SDL_GL_GetProcAddress("glGetShaderiv");
	wxglGetUniformLocation=SDL_GL_GetProcAddress("glGetUniformLocation");
	wxglGetUniformfv=SDL_GL_GetProcAddress("glGetUniformfv");
	wxglGetUniformiv=SDL_GL_GetProcAddress("glGetUniformiv");
	wxglGetVertexAttribPointerv=SDL_GL_GetProcAddress("glGetVertexAttribPointerv");
	wxglGetVertexAttribdv=SDL_GL_GetProcAddress("glGetVertexAttribdv");
	wxglGetVertexAttribfv=SDL_GL_GetProcAddress("glGetVertexAttribfv");
	wxglGetVertexAttribiv=SDL_GL_GetProcAddress("glGetVertexAttribiv");
	wxglIsProgram=SDL_GL_GetProcAddress("glIsProgram");
	wxglIsShader=SDL_GL_GetProcAddress("glIsShader");
	wxglLinkProgram=SDL_GL_GetProcAddress("glLinkProgram");
	wxglShaderSource=SDL_GL_GetProcAddress("glShaderSource");
	wxglStencilFuncSeparate=SDL_GL_GetProcAddress("glStencilFuncSeparate");
	wxglStencilMaskSeparate=SDL_GL_GetProcAddress("glStencilMaskSeparate");
	wxglStencilOpSeparate=SDL_GL_GetProcAddress("glStencilOpSeparate");
	wxglUniform1f=SDL_GL_GetProcAddress("glUniform1f");
	wxglUniform1fv=SDL_GL_GetProcAddress("glUniform1fv");
	wxglUniform1i=SDL_GL_GetProcAddress("glUniform1i");
	wxglUniform1iv=SDL_GL_GetProcAddress("glUniform1iv");
	wxglUniform2f=SDL_GL_GetProcAddress("glUniform2f");
	wxglUniform2fv=SDL_GL_GetProcAddress("glUniform2fv");
	wxglUniform2i=SDL_GL_GetProcAddress("glUniform2i");
	wxglUniform2iv=SDL_GL_GetProcAddress("glUniform2iv");
	wxglUniform3f=SDL_GL_GetProcAddress("glUniform3f");
	wxglUniform3fv=SDL_GL_GetProcAddress("glUniform3fv");
	wxglUniform3i=SDL_GL_GetProcAddress("glUniform3i");
	wxglUniform3iv=SDL_GL_GetProcAddress("glUniform3iv");
	wxglUniform4f=SDL_GL_GetProcAddress("glUniform4f");
	wxglUniform4fv=SDL_GL_GetProcAddress("glUniform4fv");
	wxglUniform4i=SDL_GL_GetProcAddress("glUniform4i");
	wxglUniform4iv=SDL_GL_GetProcAddress("glUniform4iv");
	wxglUniformMatrix2fv=SDL_GL_GetProcAddress("glUniformMatrix2fv");
	wxglUniformMatrix3fv=SDL_GL_GetProcAddress("glUniformMatrix3fv");
	wxglUniformMatrix4fv=SDL_GL_GetProcAddress("glUniformMatrix4fv");
	wxglUseProgram=SDL_GL_GetProcAddress("glUseProgram");
	wxglValidateProgram=SDL_GL_GetProcAddress("glValidateProgram");
	wxglVertexAttrib1d=SDL_GL_GetProcAddress("glVertexAttrib1d");
	wxglVertexAttrib1dv=SDL_GL_GetProcAddress("glVertexAttrib1dv");
	wxglVertexAttrib1f=SDL_GL_GetProcAddress("glVertexAttrib1f");
	wxglVertexAttrib1fv=SDL_GL_GetProcAddress("glVertexAttrib1fv");
	wxglVertexAttrib1s=SDL_GL_GetProcAddress("glVertexAttrib1s");
	wxglVertexAttrib1sv=SDL_GL_GetProcAddress("glVertexAttrib1sv");
	wxglVertexAttrib2d=SDL_GL_GetProcAddress("glVertexAttrib2d");
	wxglVertexAttrib2dv=SDL_GL_GetProcAddress("glVertexAttrib2dv");
	wxglVertexAttrib2f=SDL_GL_GetProcAddress("glVertexAttrib2f");
	wxglVertexAttrib2fv=SDL_GL_GetProcAddress("glVertexAttrib2fv");
	wxglVertexAttrib2s=SDL_GL_GetProcAddress("glVertexAttrib2s");
	wxglVertexAttrib2sv=SDL_GL_GetProcAddress("glVertexAttrib2sv");
	wxglVertexAttrib3d=SDL_GL_GetProcAddress("glVertexAttrib3d");
	wxglVertexAttrib3dv=SDL_GL_GetProcAddress("glVertexAttrib3dv");
	wxglVertexAttrib3f=SDL_GL_GetProcAddress("glVertexAttrib3f");
	wxglVertexAttrib3fv=SDL_GL_GetProcAddress("glVertexAttrib3fv");
	wxglVertexAttrib3s=SDL_GL_GetProcAddress("glVertexAttrib3s");
	wxglVertexAttrib3sv=SDL_GL_GetProcAddress("glVertexAttrib3sv");
	wxglVertexAttrib4Nbv=SDL_GL_GetProcAddress("glVertexAttrib4Nbv");
	wxglVertexAttrib4Niv=SDL_GL_GetProcAddress("glVertexAttrib4Niv");
	wxglVertexAttrib4Nsv=SDL_GL_GetProcAddress("glVertexAttrib4Nsv");
	wxglVertexAttrib4Nub=SDL_GL_GetProcAddress("glVertexAttrib4Nub");
	wxglVertexAttrib4Nubv=SDL_GL_GetProcAddress("glVertexAttrib4Nubv");
	wxglVertexAttrib4Nuiv=SDL_GL_GetProcAddress("glVertexAttrib4Nuiv");
	wxglVertexAttrib4Nusv=SDL_GL_GetProcAddress("glVertexAttrib4Nusv");
	wxglVertexAttrib4bv=SDL_GL_GetProcAddress("glVertexAttrib4bv");
	wxglVertexAttrib4d=SDL_GL_GetProcAddress("glVertexAttrib4d");
	wxglVertexAttrib4dv=SDL_GL_GetProcAddress("glVertexAttrib4dv");
	wxglVertexAttrib4f=SDL_GL_GetProcAddress("glVertexAttrib4f");
	wxglVertexAttrib4fv=SDL_GL_GetProcAddress("glVertexAttrib4fv");
	wxglVertexAttrib4iv=SDL_GL_GetProcAddress("glVertexAttrib4iv");
	wxglVertexAttrib4s=SDL_GL_GetProcAddress("glVertexAttrib4s");
	wxglVertexAttrib4sv=SDL_GL_GetProcAddress("glVertexAttrib4sv");
	wxglVertexAttrib4ubv=SDL_GL_GetProcAddress("glVertexAttrib4ubv");
	wxglVertexAttrib4uiv=SDL_GL_GetProcAddress("glVertexAttrib4uiv");
	wxglVertexAttrib4usv=SDL_GL_GetProcAddress("glVertexAttrib4usv");
	wxglVertexAttribPointer=SDL_GL_GetProcAddress("glVertexAttribPointer");
	wxglUniformMatrix2x3fv=SDL_GL_GetProcAddress("glUniformMatrix2x3fv");
	wxglUniformMatrix2x4fv=SDL_GL_GetProcAddress("glUniformMatrix2x4fv");
	wxglUniformMatrix3x2fv=SDL_GL_GetProcAddress("glUniformMatrix3x2fv");
	wxglUniformMatrix3x4fv=SDL_GL_GetProcAddress("glUniformMatrix3x4fv");
	wxglUniformMatrix4x2fv=SDL_GL_GetProcAddress("glUniformMatrix4x2fv");
	wxglUniformMatrix4x3fv=SDL_GL_GetProcAddress("glUniformMatrix4x3fv");
	wxglBindFramebuffer=SDL_GL_GetProcAddress("glBindFramebuffer");
	wxglBindRenderbuffer=SDL_GL_GetProcAddress("glBindRenderbuffer");
	wxglBlitFramebuffer=SDL_GL_GetProcAddress("glBlitFramebuffer");
	wxglCheckFramebufferStatus=SDL_GL_GetProcAddress("glCheckFramebufferStatus");
	wxglDeleteFramebuffers=SDL_GL_GetProcAddress("glDeleteFramebuffers");
	wxglDeleteRenderbuffers=SDL_GL_GetProcAddress("glDeleteRenderbuffers");
	wxglFramebufferRenderbuffer=SDL_GL_GetProcAddress("glFramebufferRenderbuffer");
	wxglFramebufferTexture1D=SDL_GL_GetProcAddress("glFramebufferTexture1D");
	wxglFramebufferTexture2D=SDL_GL_GetProcAddress("glFramebufferTexture2D");
	wxglFramebufferTexture3D=SDL_GL_GetProcAddress("glFramebufferTexture3D");
	wxglFramebufferTextureLayer=SDL_GL_GetProcAddress("glFramebufferTextureLayer");
	wxglGenFramebuffers=SDL_GL_GetProcAddress("glGenFramebuffers");
	wxglGenRenderbuffers=SDL_GL_GetProcAddress("glGenRenderbuffers");
	wxglGenerateMipmap=SDL_GL_GetProcAddress("glGenerateMipmap");
	wxglGetFramebufferAttachmentParameteriv=SDL_GL_GetProcAddress("glGetFramebufferAttachmentParameteriv");
	wxglGetRenderbufferParameteriv=SDL_GL_GetProcAddress("glGetRenderbufferParameteriv");
	wxglIsFramebuffer=SDL_GL_GetProcAddress("glIsFramebuffer");
	wxglIsRenderbuffer=SDL_GL_GetProcAddress("glIsRenderbuffer");
	wxglRenderbufferStorage=SDL_GL_GetProcAddress("glRenderbufferStorage");
	wxglRenderbufferStorageMultisample=SDL_GL_GetProcAddress("glRenderbufferStorageMultisample");

	int profile=0;
	SDL_GL_GetAttribute( SDL_GL_CONTEXT_PROFILE_MASK,&profile );
	WXGL_ES=( profile==SDL_GL_CONTEXT_PROFILE_ES );

	if( WXGL_ES ){
		
		wxglClearDepthf=SDL_GL_GetProcAddress( "glClearDepthf" );
		wxglClearDepth=wxglClearDepthd;
		
		if( WXGL_draw_buffers=SDL_GL_ExtensionSupported( "GL_EXT_draw_buffers" ) ){			//For MRTSs
			
			wxglDrawBuffers=SDL_GL_GetProcAddress( "glDrawBuffersEXT" );
			
		}else if( WXGL_draw_buffers=SDL_GL_ExtensionSupported( "GL_NV_draw_buffers" ) ){	//For MRTs on nvidia shield!
		
			wxglDrawBuffers=SDL_GL_GetProcAddress( "glDrawBuffersNV" );
		}
		
	}else if( wxglDrawBuffers ){
	
		WXGL_draw_buffers=1;
	}

#endif
	
	WXGL_depth_texture=SDL_GL_ExtensionSupported( "GL_EXT_depth_texture" ) || 
		SDL_GL_ExtensionSupported( "GL_ANGLE_depth_texture" ) ||
		SDL_GL_ExtensionSupported( "GL_WEBGL_depth_texture" ) ||
		SDL_GL_ExtensionSupported( "GL_OES_depth_texture" );
	
	WXGL_seamless_cube_map=SDL_GL_ExtensionSupported( "GL_ARB_seamless_cube_map" );
		
	WXGL_texture_filter_anisotropic=SDL_GL_ExtensionSupported( "GL_ARB_texture_filter_anisotropic" ) ||
		SDL_GL_ExtensionSupported( "GL_EXT_texture_filter_anisotropic" );
		
	WXGL_standard_derivatives=!WXGL_ES  || SDL_GL_ExtensionSupported( "GL_OES_standard_derivatives" );
}