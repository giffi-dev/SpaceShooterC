#include "collision.h"


bool RectRect(SDL_Rect rect1, SDL_Rect rect2) {
	return
		rect1.x < rect2.x + rect2.w &&
		rect1.x + rect1.w > rect2.x &&
		rect1.y < rect2.y + rect2.h &&
		rect1.y + rect1.h > rect2.y;
}

bool RectPoint(SDL_Rect r, Vec2i p) {
	return
		(p.x >= r.x && p.x < r.x + r.w) &&
		(p.y >= r.y && p.y < r.y + r.h);
}
