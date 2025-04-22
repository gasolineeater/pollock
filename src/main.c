#include "MLX42/MLX42.h"
#include "MLX42/MLX42_Int.h"

int	main(void)
{
	void	*connection;
	connection = mlx_init(800, 800, "test", 1);
	mlx_loop(connection);
}
