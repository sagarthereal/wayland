#include <prog.h>



struct client_state {
	struct wl_display* my_display;
};
    
int main(int argc, char *argv[])
{
	client_state.my_display = wl_display_connect(NULL);
}
