/*
* Extra wrapper over native pointer to indicate who owns this memory.
* Owner is mruby (it should be garage collected) or C (it shouldn't be).
*/

typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby garbage collects the ruby object containing this pointer.
   * This is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* TODO: Is this needed? */
  void* data;
} mruby_to_native_ref;

// NOTE: mrb param is currently not used, but may be required
// in the future if we stop using this wrapper.
#define mruby_Procps_owns(mrb, ptr) ((mruby_to_native_ref*)ptr)->belongs_to_ruby
#define mruby_Procps_unbox(boxed) ((void *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj)

mruby_to_native_ref *
mruby_Procps_unmanaged_ref_create(void* obj)
{
  mruby_to_native_ref* ref = (mruby_to_native_ref*)calloc(1, sizeof(mruby_to_native_ref));
  ref->belongs_to_ruby = FALSE;
  ref->obj = obj;
  return ref;
}

mruby_to_native_ref *
mruby_Procps_managed_ref_create(void *obj)
{
   mruby_to_native_ref* ref = (mruby_to_native_ref*)calloc(1, sizeof(mruby_to_native_ref));
   ref->belongs_to_ruby = TRUE;
   ref->obj = obj;
   return ref;
}
