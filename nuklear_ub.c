#include <stdio.h>

#define NK_IMPLEMENTATION
#define NK_INCLUDE_DEFAULT_ALLOCATOR
#include "nuklear.h"

float dummy_width(nk_handle handle, float h, const char* text, int len)
{
	return(0.0f);
}

int main()
{
	struct nk_context ctx = {};
	struct nk_user_font font = {};
	font.userdata.ptr = 0;
	font.height = 30;
	font.width = dummy_width;
	nk_init_default(&ctx, &font);
	if (nk_begin(&ctx, "Show", nk_rect(0, 0, 100, 100), 0))
	{
	}
	nk_end(&ctx);
	return(0);
}
