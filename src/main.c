#include "MLX42/MLX42.h"
#include "MLX42/MLX42_Int.h"

#define WIDTH 800
#define HEIGHT 800

int	main(void)
{
	int			i;
	mlx_t		*mlx;
	mlx_image_t	*img;

	i = 0;
	mlx = mlx_init(WIDTH, HEIGHT, "test", 1);
	img = mlx_new_image(mlx, WIDTH, HEIGHT);
	while (i <= WIDTH/2 - 1)
	{
		mlx_put_pixel(img, WIDTH/2 + i, HEIGHT/2, 0xFF0000FF);
		i++;
	}
	mlx_image_to_window(mlx, img, 0, 0);
	mlx_loop(mlx);
}
