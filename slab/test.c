#include <linux/slab.h>
#include <stdio.h>

static struct kmem_cache *my_cachep;

static void init_my_cache( void )
{

   my_cachep = kmem_cache_create(
                  "my_cache",            /* Name */
                  32,                    /* Object Size */
                  0,                     /* Alignment */
                  SLAB_HWCACHE_ALIGN,    /* Flags */
                  NULL, NULL );          /* Constructor/Deconstructor */

   return;
}

int slab_test( void )
{
  void *object;

  printk( "Cache name is %s\n", kmem_cache_name( my_cachep ) );
  printk( "Cache object size is %d\n", kmem_cache_size( my_cachep ) );

  object = kmem_cache_alloc( my_cachep, GFP_KERNEL );

  if (object) {

    kmem_cache_free( my_cachep, object );

  }

  return 0;
}

int
main()
{
    init_my_cache();
    slab_test();
    return 0;
}
