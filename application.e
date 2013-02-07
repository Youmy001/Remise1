note
	description : "Affichage d'une image pendant 2 secondes."
	autor		: "Veronique Blais et Tommy Teasdale"
	date        : "6 fevirer 2013"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			l_init:NATURAL_32
			ctr:INTEGER
			screen: POINTER
			ef_bmp:STRING
			c_bmp: C_STRING
			targetarea:POINTER
			l_infile, memory_manager: POINTER
			bmp_w, bmp_h: INTEGER
		do
			--Initialiser
			l_init := {SDL_WRAPPER}.SDL_INIT_VIDEO
			ctr :={SDL_WRAPPER}.SDL_Init(l_init)

			--Charger l'image test.bmp dans un SDL surface
			ef_bmp :="test.bmp"
			create c_bmp.make (ef_bmp)
			l_infile:={SDL_WRAPPER}.SDL_Loadbmp(c_bmp.item)

			bmp_h := {SDL_WRAPPER}.get_SDL_Surface_H(l_infile)
			bmp_w := {SDL_WRAPPER}.get_SDL_Surface_W(l_infile)
			--Initialiser la fenetre
			screen := {SDL_WRAPPER}.SDL_SetVideoMode(bmp_w,bmp_h, 32, {SDL_WRAPPER}.SDL_SWSURFACE)


			create memory_manager.default_create
			targetarea:=memory_manager.memory_alloc ({SDL_WRAPPER}.sizeof_SDL_Rect)

			{SDL_WRAPPER}.set_SDL_Rect_x(targetarea, 0)
			{SDL_WRAPPER}.set_SDL_Rect_y(targetarea, 0)
			{SDL_WRAPPER}.set_SDL_Rect_w(targetarea, bmp_w)
			{SDL_WRAPPER}.set_SDL_Rect_h(targetarea, bmp_h)

			ctr := {SDL_WRAPPER}.SDL_BlitSurface(l_infile, create {POINTER}, screen, targetarea)

			ctr := {SDL_WRAPPER}.SDL_Flip(screen)

			{SDL_WRAPPER}.SDL_Delay(2000)

			targetarea.memory_free
		end
end
