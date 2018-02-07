# LDrawPOV
LDraw Design Pad

LDraw - POV Library standards

- All files will carry a standard header:
// <LDraw Part Number> - <Ldraw Part Name>
// Author: <POV Code Author>
// DAT Author: <LDraw Part Author>

- All files will include either primitives.inc or macros.inc

- Objects must be built from solid primitives (i.e. all CSG and no meshes)

- Patterns must use textures

- The goal is to be compatible with L3P/LDView/LDCad export.  However, all files must able to be
  rendered outside of an program generated file.  This means that any program specific declares
  that are used must be defined in the primitives.inc file.
