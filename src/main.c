#include "MLX42/MLX42.h"
#include "MLX42/MLX42_Int.h"

#define WIDTH 800
#define HEIGHT 800

int	main(void)
{
	int			y;
	int			x;
	mlx_t		*mlx;
	mlx_image_t	*img;

	y = 0;
	mlx = mlx_init(WIDTH, HEIGHT, "test", 1);
	img = mlx_new_image(mlx, WIDTH, HEIGHT);
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			mlx_put_pixel(img, x, y, 0xFF0000FF);
			x++;
		}
		y++;
	}
	mlx_image_to_window(mlx, img, 0, 0);
	mlx_loop(mlx);
}
