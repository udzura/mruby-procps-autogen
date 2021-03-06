/**
 * void
 * closeproc(PROCTAB * PT)
 */
#define mruby_Procps_closeproc_FUNCTION
mrb_value
mruby_Procps_closeproc(mrb_state* mrb, mrb_value self)
{

  mrb_value boxed_PT;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &boxed_PT);

  /* Type checking */
  if (!mruby_Procps_typecheck_PROCTAB(mrb, boxed_PT)) {
    mrb_raise(mrb, E_TYPE_ERROR, "PROCTAB expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  PROCTAB * unboxed_PT = (mrb_nil_p(boxed_PT) ? NULL : mruby_Procps_unbox_PROCTAB(boxed_PT));

  /* Invocation */
  closeproc(unboxed_PT);

  return mrb_nil_value();
}

/**
 * void
 * cpuinfo()
 */
#define mruby_Procps_cpuinfo_FUNCTION
mrb_value
mruby_Procps_cpuinfo(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  cpuinfo();

  return mrb_nil_value();
}

/**
 * unsigned int
 * dev_to_tty(char *restrict ret, unsigned int chop, dev_t dev_t_dev, int pid, unsigned int flags)
 */
#define mruby_Procps_dev_to_tty_FUNCTION
mrb_value
mruby_Procps_dev_to_tty(mrb_state* mrb, mrb_value self)
{

  char * unboxed_ret = NULL;
  mrb_int unboxed_chop;
  mrb_int unboxed_dev_t_dev;
  mrb_int unboxed_pid;
  mrb_int unboxed_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ziiii", &unboxed_ret, &unboxed_chop, &unboxed_dev_t_dev, &unboxed_pid, &unboxed_flags);

  /* Invocation */
  unsigned int unboxed_return_value = dev_to_tty(unboxed_ret, unboxed_chop, unboxed_dev_t_dev, unboxed_pid, unboxed_flags);

  /* Box the return value */
  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);

  return boxed_return_value;
}

///**
// * int
// * escape_command(char *const restrict outbuf, const proc_t *const restrict pp, int bytes, int * cells, unsigned int flags)
// */
//#define mruby_Procps_escape_command_FUNCTION
//mrb_value
//mruby_Procps_escape_command(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_outbuf;
//  mrb_value boxed_pp;
//  mrb_int unboxed_bytes;
//  mrb_value boxed_cells;
//  mrb_int unboxed_flags;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooioi", &boxed_outbuf, &boxed_pp, &unboxed_bytes, &boxed_cells, &unboxed_flags);
//
//  /* Type checking */
//  TODO_type_check_char_PTR_restrict(boxed_outbuf);
//  TODO_type_check_proc_t_PTR_restrict(boxed_pp);
//  if (!mruby_Procps_typecheck_void_pointer(mrb, boxed_cells, "int *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  char *const restrict unboxed_outbuf = TODO_mruby_unbox_char_PTR_restrict(boxed_outbuf);
//
//  const proc_t *const restrict unboxed_pp = TODO_mruby_unbox_proc_t_PTR_restrict(boxed_pp);
//
//  void * unboxed_cells = (mrb_nil_p(boxed_cells) ? NULL : mruby_Procps_unbox_void_pointer(mrb, boxed_cells));
//
//  /* Invocation */
//  int unboxed_return_value = escape_command(unboxed_outbuf, unboxed_pp, unboxed_bytes, unboxed_cells, unboxed_flags);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);
//
//  return boxed_return_value;
//}

/**
 * int
 * escape_str(char *restrict dst, const char *restrict src, int bufsize, int * maxcells)
 */
#define mruby_Procps_escape_str_FUNCTION
mrb_value
mruby_Procps_escape_str(mrb_state* mrb, mrb_value self)
{

  char * unboxed_dst = NULL;
  char * unboxed_src = NULL;
  mrb_int unboxed_bufsize;
  mrb_value boxed_maxcells;

  /* Fetch the args */
  mrb_get_args(mrb, "zzio", &unboxed_dst, &unboxed_src, &unboxed_bufsize, &boxed_maxcells);

  /* Type checking */
  if (!mruby_Procps_typecheck_void_pointer(mrb, boxed_maxcells, "int *")) {
    return mrb_nil_value();
  }

  /* Unbox params */
  void * unboxed_maxcells = (mrb_nil_p(boxed_maxcells) ? NULL : mruby_Procps_unbox_void_pointer(mrb, boxed_maxcells));

  /* Invocation */
  int unboxed_return_value = escape_str(unboxed_dst, unboxed_src, unboxed_bufsize, unboxed_maxcells);

  /* Box the return value */
  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);

  return boxed_return_value;
}

///**
// * int
// * escape_strlist(char *restrict dst, char *const restrict *restrict src, size_t n, int * cells)
// */
//#define mruby_Procps_escape_strlist_FUNCTION
//mrb_value
//mruby_Procps_escape_strlist(mrb_state* mrb, mrb_value self)
//{
//
//  char * unboxed_dst = NULL;
//  mrb_value boxed_src;
//  mrb_int unboxed_n;
//  mrb_value boxed_cells;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "zoio", &unboxed_dst, &boxed_src, &unboxed_n, &boxed_cells);
//
//  /* Type checking */
//  TODO_type_check_char_PTR_restrict_PTR_restrict(boxed_src);
//  if (!mruby_Procps_typecheck_void_pointer(mrb, boxed_cells, "int *")) {
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  char *const restrict *restrict unboxed_src = TODO_mruby_unbox_char_PTR_restrict_PTR_restrict(boxed_src);
//
//  void * unboxed_cells = (mrb_nil_p(boxed_cells) ? NULL : mruby_Procps_unbox_void_pointer(mrb, boxed_cells));
//
//  /* Invocation */
//  int unboxed_return_value = escape_strlist(unboxed_dst, unboxed_src, unboxed_n, unboxed_cells);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);
//
//  return boxed_return_value;
//}

/**
 * int
 * escaped_copy(char *restrict dst, const char *restrict src, int bufsize, int * maxroom)
 */
#define mruby_Procps_escaped_copy_FUNCTION
mrb_value
mruby_Procps_escaped_copy(mrb_state* mrb, mrb_value self)
{

  char * unboxed_dst = NULL;
  char * unboxed_src = NULL;
  mrb_int unboxed_bufsize;
  mrb_value boxed_maxroom;

  /* Fetch the args */
  mrb_get_args(mrb, "zzio", &unboxed_dst, &unboxed_src, &unboxed_bufsize, &boxed_maxroom);

  /* Type checking */
  if (!mruby_Procps_typecheck_void_pointer(mrb, boxed_maxroom, "int *")) {
    return mrb_nil_value();
  }

  /* Unbox params */
  void * unboxed_maxroom = (mrb_nil_p(boxed_maxroom) ? NULL : mruby_Procps_unbox_void_pointer(mrb, boxed_maxroom));

  /* Invocation */
  int unboxed_return_value = escaped_copy(unboxed_dst, unboxed_src, unboxed_bufsize, unboxed_maxroom);

  /* Box the return value */
  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);

  return boxed_return_value;
}

/**
 * void
 * free_slabinfo(struct slab_info * arg1)
 */
#define mruby_Procps_free_slabinfo_FUNCTION
mrb_value
mruby_Procps_free_slabinfo(mrb_state* mrb, mrb_value self)
{

  mrb_value boxed_arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &boxed_arg1);

  /* Type checking */
  if (!mruby_Procps_typecheck_SlabInfo(mrb, boxed_arg1)) {
    mrb_raise(mrb, E_TYPE_ERROR, "SlabInfo expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  struct slab_info * unboxed_arg1 = (mrb_nil_p(boxed_arg1) ? NULL : mruby_Procps_unbox_slab_info(boxed_arg1));

  /* Invocation */
  free_slabinfo(unboxed_arg1);

  return mrb_nil_value();
}

/**
 * void
 * freeproc(proc_t * p)
 */
#define mruby_Procps_freeproc_FUNCTION
mrb_value
mruby_Procps_freeproc(mrb_state* mrb, mrb_value self)
{

  mrb_value boxed_p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &boxed_p);

  /* Type checking */

  /* Unbox params */
  proc_t * unboxed_p = (mrb_nil_p(boxed_p) ? NULL : mruby_Procps_unbox_proc_t(boxed_p));

  /* Invocation */
  freeproc(unboxed_p);

  return mrb_nil_value();
}

/**
 * int
 * get_ns_id(const char * name)
 */
#define mruby_Procps_get_ns_id_FUNCTION
mrb_value
mruby_Procps_get_ns_id(mrb_state* mrb, mrb_value self)
{

  char * unboxed_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &unboxed_name);

  /* Invocation */
  int unboxed_return_value = get_ns_id(unboxed_name);

  /* Box the return value */
  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);

  return boxed_return_value;
}

/**
 * const char *
 * get_ns_name(int id)
 */
#define mruby_Procps_get_ns_name_FUNCTION
mrb_value
mruby_Procps_get_ns_name(mrb_state* mrb, mrb_value self)
{

  mrb_int unboxed_id;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &unboxed_id);

  /* Invocation */
  const char * unboxed_return_value = get_ns_name(unboxed_id);

  /* Box the return value */
  mrb_value boxed_return_value = unboxed_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, unboxed_return_value);

  return boxed_return_value;
}

/**
 * unsigned int
 * get_pid_digits()
 */
#define mruby_Procps_get_pid_digits_FUNCTION
mrb_value
mruby_Procps_get_pid_digits(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  unsigned int unboxed_return_value = get_pid_digits();

  /* Box the return value */
  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);

  return boxed_return_value;
}

/**
 * proc_t *
 * get_proc_stats(pid_t pid, proc_t * p)
 */
#define mruby_Procps_get_proc_stats_FUNCTION
mrb_value
mruby_Procps_get_proc_stats(mrb_state* mrb, mrb_value self)
{

  mrb_int unboxed_pid;
  mrb_value boxed_p;

  /* Fetch the args */
  mrb_get_args(mrb, "io", &unboxed_pid, &boxed_p);

  /* Type checking */

  /* Unbox params */
  proc_t * unboxed_p = (mrb_nil_p(boxed_p) ? NULL : mruby_Procps_unbox_proc_t(boxed_p));

  /* Invocation */
  proc_t * unboxed_return_value = get_proc_stats(unboxed_pid, unboxed_p);

  /* Box the return value */
  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_proc_t(mrb, unboxed_return_value));

  return boxed_return_value;
}

///**
// * int
// * get_slabinfo(struct slab_info ** arg1, struct slab_stat * arg2)
// */
//#define mruby_Procps_get_slabinfo_FUNCTION
//mrb_value
//mruby_Procps_get_slabinfo(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_arg1;
//  mrb_value boxed_arg2;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "oo", &boxed_arg1, &boxed_arg2);
//
//  /* Type checking */
//  TODO_type_check_slab_info_PTR_PTR(boxed_arg1);
//  if (!mruby_Procps_typecheck_SlabStat(mrb, boxed_arg2)) {
//    mrb_raise(mrb, E_TYPE_ERROR, "SlabStat expected");
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  struct slab_info ** unboxed_arg1 = TODO_mruby_unbox_slab_info_PTR_PTR(boxed_arg1);
//
//  struct slab_stat * unboxed_arg2 = (mrb_nil_p(boxed_arg2) ? NULL : mruby_Procps_unbox_slab_stat(boxed_arg2));
//
//  /* Invocation */
//  int unboxed_return_value = get_slabinfo(unboxed_arg1, unboxed_arg2);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);
//
//  return boxed_return_value;
//}

/**
 * unsigned long
 * getbtime()
 */
#define mruby_Procps_getbtime_FUNCTION
mrb_value
mruby_Procps_getbtime(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  unsigned long unboxed_return_value = getbtime();

  /* Box the return value */
  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);

  return boxed_return_value;
}

///**
// * unsigned int
// * getdiskstat(struct disk_stat ** arg1, struct partition_stat ** arg2)
// */
//#define mruby_Procps_getdiskstat_FUNCTION
//mrb_value
//mruby_Procps_getdiskstat(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_arg1;
//  mrb_value boxed_arg2;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "oo", &boxed_arg1, &boxed_arg2);
//
//  /* Type checking */
//  TODO_type_check_disk_stat_PTR_PTR(boxed_arg1);
//  TODO_type_check_partition_stat_PTR_PTR(boxed_arg2);
//
//  /* Unbox params */
//  struct disk_stat ** unboxed_arg1 = TODO_mruby_unbox_disk_stat_PTR_PTR(boxed_arg1);
//
//  struct partition_stat ** unboxed_arg2 = TODO_mruby_unbox_partition_stat_PTR_PTR(boxed_arg2);
//
//  /* Invocation */
//  unsigned int unboxed_return_value = getdiskstat(unboxed_arg1, unboxed_arg2);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);
//
//  return boxed_return_value;
//}

/**
 * unsigned int
 * getpartitions_num(struct disk_stat * disks, int ndisks)
 */
#define mruby_Procps_getpartitions_num_FUNCTION
mrb_value
mruby_Procps_getpartitions_num(mrb_state* mrb, mrb_value self)
{

  mrb_value boxed_disks;
  mrb_int unboxed_ndisks;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &boxed_disks, &unboxed_ndisks);

  /* Type checking */
  if (!mruby_Procps_typecheck_DiskStat(mrb, boxed_disks)) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiskStat expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  struct disk_stat * unboxed_disks = (mrb_nil_p(boxed_disks) ? NULL : mruby_Procps_unbox_disk_stat(boxed_disks));

  /* Invocation */
  unsigned int unboxed_return_value = getpartitions_num(unboxed_disks, unboxed_ndisks);

  /* Box the return value */
  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);

  return boxed_return_value;
}

///**
// * unsigned int
// * getslabinfo(struct slab_cache ** arg1)
// */
//#define mruby_Procps_getslabinfo_FUNCTION
//mrb_value
//mruby_Procps_getslabinfo(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_arg1;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "o", &boxed_arg1);
//
//  /* Type checking */
//  TODO_type_check_slab_cache_PTR_PTR(boxed_arg1);
//
//  /* Unbox params */
//  struct slab_cache ** unboxed_arg1 = TODO_mruby_unbox_slab_cache_PTR_PTR(boxed_arg1);
//
//  /* Invocation */
//  unsigned int unboxed_return_value = getslabinfo(unboxed_arg1);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);
//
//  return boxed_return_value;
//}

///**
// * void
// * getstat(jiff *restrict cuse, jiff *restrict cice, jiff *restrict csys, jiff *restrict cide, jiff *restrict ciow, jiff *restrict cxxx, jiff *restrict cyyy, jiff *restrict czzz, unsigned long *restrict pin, unsigned long *restrict pout, unsigned long *restrict s_in, unsigned long *restrict sout, unsigned int *restrict intr, unsigned int *restrict ctxt, unsigned int *restrict running, unsigned int *restrict blocked, unsigned int *restrict btime, unsigned int *restrict processes)
// */
//#define mruby_Procps_getstat_FUNCTION
//mrb_value
//mruby_Procps_getstat(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_cuse;
//  mrb_value boxed_cice;
//  mrb_value boxed_csys;
//  mrb_value boxed_cide;
//  mrb_value boxed_ciow;
//  mrb_value boxed_cxxx;
//  mrb_value boxed_cyyy;
//  mrb_value boxed_czzz;
//  mrb_value boxed_pin;
//  mrb_value boxed_pout;
//  mrb_value boxed_s_in;
//  mrb_value boxed_sout;
//  mrb_value boxed_intr;
//  mrb_value boxed_ctxt;
//  mrb_value boxed_running;
//  mrb_value boxed_blocked;
//  mrb_value boxed_btime;
//  mrb_value boxed_processes;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "oooooooooooooooooo", &boxed_cuse, &boxed_cice, &boxed_csys, &boxed_cide, &boxed_ciow, &boxed_cxxx, &boxed_cyyy, &boxed_czzz, &boxed_pin, &boxed_pout, &boxed_s_in, &boxed_sout, &boxed_intr, &boxed_ctxt, &boxed_running, &boxed_blocked, &boxed_btime, &boxed_processes);
//
//  /* Type checking */
//  TODO_type_check_jiff_PTR_restrict(boxed_cuse);
//  TODO_type_check_jiff_PTR_restrict(boxed_cice);
//  TODO_type_check_jiff_PTR_restrict(boxed_csys);
//  TODO_type_check_jiff_PTR_restrict(boxed_cide);
//  TODO_type_check_jiff_PTR_restrict(boxed_ciow);
//  TODO_type_check_jiff_PTR_restrict(boxed_cxxx);
//  TODO_type_check_jiff_PTR_restrict(boxed_cyyy);
//  TODO_type_check_jiff_PTR_restrict(boxed_czzz);
//  TODO_type_check_unsigned_long_PTR_restrict(boxed_pin);
//  TODO_type_check_unsigned_long_PTR_restrict(boxed_pout);
//  TODO_type_check_unsigned_long_PTR_restrict(boxed_s_in);
//  TODO_type_check_unsigned_long_PTR_restrict(boxed_sout);
//  TODO_type_check_unsigned_int_PTR_restrict(boxed_intr);
//  TODO_type_check_unsigned_int_PTR_restrict(boxed_ctxt);
//  TODO_type_check_unsigned_int_PTR_restrict(boxed_running);
//  TODO_type_check_unsigned_int_PTR_restrict(boxed_blocked);
//  TODO_type_check_unsigned_int_PTR_restrict(boxed_btime);
//  TODO_type_check_unsigned_int_PTR_restrict(boxed_processes);
//
//  /* Unbox params */
//  jiff *restrict unboxed_cuse = TODO_mruby_unbox_jiff_PTR_restrict(boxed_cuse);
//
//  jiff *restrict unboxed_cice = TODO_mruby_unbox_jiff_PTR_restrict(boxed_cice);
//
//  jiff *restrict unboxed_csys = TODO_mruby_unbox_jiff_PTR_restrict(boxed_csys);
//
//  jiff *restrict unboxed_cide = TODO_mruby_unbox_jiff_PTR_restrict(boxed_cide);
//
//  jiff *restrict unboxed_ciow = TODO_mruby_unbox_jiff_PTR_restrict(boxed_ciow);
//
//  jiff *restrict unboxed_cxxx = TODO_mruby_unbox_jiff_PTR_restrict(boxed_cxxx);
//
//  jiff *restrict unboxed_cyyy = TODO_mruby_unbox_jiff_PTR_restrict(boxed_cyyy);
//
//  jiff *restrict unboxed_czzz = TODO_mruby_unbox_jiff_PTR_restrict(boxed_czzz);
//
//  unsigned long *restrict unboxed_pin = TODO_mruby_unbox_unsigned_long_PTR_restrict(boxed_pin);
//
//  unsigned long *restrict unboxed_pout = TODO_mruby_unbox_unsigned_long_PTR_restrict(boxed_pout);
//
//  unsigned long *restrict unboxed_s_in = TODO_mruby_unbox_unsigned_long_PTR_restrict(boxed_s_in);
//
//  unsigned long *restrict unboxed_sout = TODO_mruby_unbox_unsigned_long_PTR_restrict(boxed_sout);
//
//  unsigned int *restrict unboxed_intr = TODO_mruby_unbox_unsigned_int_PTR_restrict(boxed_intr);
//
//  unsigned int *restrict unboxed_ctxt = TODO_mruby_unbox_unsigned_int_PTR_restrict(boxed_ctxt);
//
//  unsigned int *restrict unboxed_running = TODO_mruby_unbox_unsigned_int_PTR_restrict(boxed_running);
//
//  unsigned int *restrict unboxed_blocked = TODO_mruby_unbox_unsigned_int_PTR_restrict(boxed_blocked);
//
//  unsigned int *restrict unboxed_btime = TODO_mruby_unbox_unsigned_int_PTR_restrict(boxed_btime);
//
//  unsigned int *restrict unboxed_processes = TODO_mruby_unbox_unsigned_int_PTR_restrict(boxed_processes);
//
//  /* Invocation */
//  getstat(unboxed_cuse, unboxed_cice, unboxed_csys, unboxed_cide, unboxed_ciow, unboxed_cxxx, unboxed_cyyy, unboxed_czzz, unboxed_pin, unboxed_pout, unboxed_s_in, unboxed_sout, unboxed_intr, unboxed_ctxt, unboxed_running, unboxed_blocked, unboxed_btime, unboxed_processes);
//
//  return mrb_nil_value();
//}

/**
 * void
 * loadavg(double * av1, double * av5, double * av15)
 */
#define mruby_Procps_loadavg_FUNCTION
mrb_value
mruby_Procps_loadavg(mrb_state* mrb, mrb_value self)
{

  mrb_value boxed_av1;
  mrb_value boxed_av5;
  mrb_value boxed_av15;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &boxed_av1, &boxed_av5, &boxed_av15);

  /* Type checking */
  if (!mruby_Procps_typecheck_void_pointer(mrb, boxed_av1, "double *")) {
    return mrb_nil_value();
  }
  if (!mruby_Procps_typecheck_void_pointer(mrb, boxed_av5, "double *")) {
    return mrb_nil_value();
  }
  if (!mruby_Procps_typecheck_void_pointer(mrb, boxed_av15, "double *")) {
    return mrb_nil_value();
  }

  /* Unbox params */
  void * unboxed_av1 = (mrb_nil_p(boxed_av1) ? NULL : mruby_Procps_unbox_void_pointer(mrb, boxed_av1));

  void * unboxed_av5 = (mrb_nil_p(boxed_av5) ? NULL : mruby_Procps_unbox_void_pointer(mrb, boxed_av5));

  void * unboxed_av15 = (mrb_nil_p(boxed_av15) ? NULL : mruby_Procps_unbox_void_pointer(mrb, boxed_av15));

  /* Invocation */
  loadavg(unboxed_av1, unboxed_av5, unboxed_av15);

  return mrb_nil_value();
}

/**
 * void
 * look_up_our_self(proc_t * p)
 */
#define mruby_Procps_look_up_our_self_FUNCTION
mrb_value
mruby_Procps_look_up_our_self(mrb_state* mrb, mrb_value self)
{

  mrb_value boxed_p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &boxed_p);

  /* Type checking */

  /* Unbox params */
  proc_t * unboxed_p = (mrb_nil_p(boxed_p) ? NULL : mruby_Procps_unbox_proc_t(boxed_p));

  /* Invocation */
  look_up_our_self(unboxed_p);

  return mrb_nil_value();
}

/**
 * const char *
 * lookup_wchan(int pid)
 */
#define mruby_Procps_lookup_wchan_FUNCTION
mrb_value
mruby_Procps_lookup_wchan(mrb_state* mrb, mrb_value self)
{

  mrb_int unboxed_pid;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &unboxed_pid);

  /* Invocation */
  const char * unboxed_return_value = lookup_wchan(unboxed_pid);

  /* Box the return value */
  mrb_value boxed_return_value = unboxed_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, unboxed_return_value);

  return boxed_return_value;
}

/**
 * void
 * meminfo()
 */
#define mruby_Procps_meminfo_FUNCTION
mrb_value
mruby_Procps_meminfo(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  meminfo();

  return mrb_nil_value();
}

/**
 * PROCTAB *
 * openproc(int flags)
 */
#define mruby_Procps_openproc_FUNCTION
mrb_value
mruby_Procps_openproc(mrb_state* mrb, mrb_value self)
{

  mrb_int unboxed_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &unboxed_flags);

  /* Invocation */
  PROCTAB * unboxed_return_value = openproc(unboxed_flags);

  /* Box the return value */
  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_PROCTAB(mrb, unboxed_return_value));

  return boxed_return_value;
}

/**
 * void
 * pretty_print_signals()
 */
#define mruby_Procps_pretty_print_signals_FUNCTION
mrb_value
mruby_Procps_pretty_print_signals(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  pretty_print_signals();

  return mrb_nil_value();
}

///**
// * int
// * print_given_signals(int argc, const char *const restrict *restrict argv, int max_line)
// */
//#define mruby_Procps_print_given_signals_FUNCTION
//mrb_value
//mruby_Procps_print_given_signals(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_int unboxed_argc;
//  mrb_value boxed_argv;
//  mrb_int unboxed_max_line;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ioi", &unboxed_argc, &boxed_argv, &unboxed_max_line);
//
//  /* Type checking */
//  TODO_type_check_char_PTR_restrict_PTR_restrict(boxed_argv);
//
//  /* Unbox params */
//  const char *const restrict *restrict unboxed_argv = TODO_mruby_unbox_char_PTR_restrict_PTR_restrict(boxed_argv);
//
//  /* Invocation */
//  int unboxed_return_value = print_given_signals(unboxed_argc, unboxed_argv, unboxed_max_line);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);
//
//  return boxed_return_value;
//}

/**
 * void
 * print_uptime(int human_readable)
 */
#define mruby_Procps_print_uptime_FUNCTION
mrb_value
mruby_Procps_print_uptime(mrb_state* mrb, mrb_value self)
{

  mrb_int unboxed_human_readable;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &unboxed_human_readable);

  /* Invocation */
  print_uptime(unboxed_human_readable);

  return mrb_nil_value();
}

/**
 * int
 * procps_linux_version()
 */
#define mruby_Procps_procps_linux_version_FUNCTION
mrb_value
mruby_Procps_procps_linux_version(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  int unboxed_return_value = procps_linux_version();

  /* Box the return value */
  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);

  return boxed_return_value;
}

/**
 * void
 * put_slabinfo(struct slab_info * arg1)
 */
#define mruby_Procps_put_slabinfo_FUNCTION
mrb_value
mruby_Procps_put_slabinfo(mrb_state* mrb, mrb_value self)
{

  mrb_value boxed_arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &boxed_arg1);

  /* Type checking */
  if (!mruby_Procps_typecheck_SlabInfo(mrb, boxed_arg1)) {
    mrb_raise(mrb, E_TYPE_ERROR, "SlabInfo expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  struct slab_info * unboxed_arg1 = (mrb_nil_p(boxed_arg1) ? NULL : mruby_Procps_unbox_slab_info(boxed_arg1));

  /* Invocation */
  put_slabinfo(unboxed_arg1);

  return mrb_nil_value();
}

///**
// * char *
// * pwcache_get_group(gid_t gid)
// */
//#define mruby_Procps_pwcache_get_group_FUNCTION
//mrb_value
//mruby_Procps_pwcache_get_group(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_gid;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "o", &boxed_gid);
//
//  /* Type checking */
//  TODO_type_check_gid_t(boxed_gid);
//
//  /* Unbox params */
//  gid_t unboxed_gid = TODO_mruby_unbox_gid_t(boxed_gid);
//
//  /* Invocation */
//  char * unboxed_return_value = pwcache_get_group(unboxed_gid);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_void_pointer(mrb, unboxed_return_value));
//
//  return boxed_return_value;
//}

///**
// * char *
// * pwcache_get_user(uid_t uid)
// */
//#define mruby_Procps_pwcache_get_user_FUNCTION
//mrb_value
//mruby_Procps_pwcache_get_user(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_uid;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "o", &boxed_uid);
//
//  /* Type checking */
//  TODO_type_check_uid_t(boxed_uid);
//
//  /* Unbox params */
//  uid_t unboxed_uid = TODO_mruby_unbox_uid_t(boxed_uid);
//
//  /* Invocation */
//  char * unboxed_return_value = pwcache_get_user(unboxed_uid);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_void_pointer(mrb, unboxed_return_value));
//
//  return boxed_return_value;
//}

///**
// * int
// * read_cmdline(char *const restrict dst, unsigned int sz, unsigned int pid)
// */
//#define mruby_Procps_read_cmdline_FUNCTION
//mrb_value
//mruby_Procps_read_cmdline(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_dst;
//  mrb_int unboxed_sz;
//  mrb_int unboxed_pid;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "oii", &boxed_dst, &unboxed_sz, &unboxed_pid);
//
//  /* Type checking */
//  TODO_type_check_char_PTR_restrict(boxed_dst);
//
//  /* Unbox params */
//  char *const restrict unboxed_dst = TODO_mruby_unbox_char_PTR_restrict(boxed_dst);
//
//  /* Invocation */
//  int unboxed_return_value = read_cmdline(unboxed_dst, unboxed_sz, unboxed_pid);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);
//
//  return boxed_return_value;
//}

/**
 * proc_t *
 * readeither(PROCTAB *const restrict PT, proc_t *restrict x)
 */
#define mruby_Procps_readeither_FUNCTION
mrb_value
mruby_Procps_readeither(mrb_state* mrb, mrb_value self)
{

  mrb_value boxed_PT;
  mrb_value boxed_x;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &boxed_PT, &boxed_x);

  /* Type checking */
  if (!mruby_Procps_typecheck_PROCTAB(mrb, boxed_PT)) {
    mrb_raise(mrb, E_TYPE_ERROR, "PROCTAB expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  PROCTAB *const restrict unboxed_PT = (mrb_nil_p(boxed_PT) ? NULL : mruby_Procps_unbox_PROCTAB(boxed_PT));

  proc_t *restrict unboxed_x = (mrb_nil_p(boxed_x) ? NULL : mruby_Procps_unbox_proc_t(boxed_x));

  /* Invocation */
  proc_t * unboxed_return_value = readeither(unboxed_PT, unboxed_x);

  /* Box the return value */
  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_proc_t(mrb, unboxed_return_value));

  return boxed_return_value;
}

/**
 * proc_t *
 * readproc(PROCTAB *const restrict PT, proc_t *restrict p)
 */
#define mruby_Procps_readproc_FUNCTION
mrb_value
mruby_Procps_readproc(mrb_state* mrb, mrb_value self)
{

  mrb_value boxed_PT;
  mrb_value boxed_p;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &boxed_PT, &boxed_p);

  /* Type checking */
  if (!mruby_Procps_typecheck_PROCTAB(mrb, boxed_PT)) {
    mrb_raise(mrb, E_TYPE_ERROR, "PROCTAB expected");
    return mrb_nil_value();
  }

  /* Unbox params */
  PROCTAB *const restrict unboxed_PT = (mrb_nil_p(boxed_PT) ? NULL : mruby_Procps_unbox_PROCTAB(boxed_PT));

  proc_t *restrict unboxed_p = (mrb_nil_p(boxed_p) ? NULL : mruby_Procps_unbox_proc_t(boxed_p));

  /* Invocation */
  proc_t * unboxed_return_value = readproc(unboxed_PT, unboxed_p);

  /* Box the return value */
  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_proc_t(mrb, unboxed_return_value));

  return boxed_return_value;
}

///**
// * proc_t **
// * readproctab(int flags)
// */
//#define mruby_Procps_readproctab_FUNCTION
//mrb_value
//mruby_Procps_readproctab(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_int unboxed_flags;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "i", &unboxed_flags);
//
//  /* Invocation */
//  proc_t ** unboxed_return_value = readproctab(unboxed_flags);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = TODO_mruby_box_proc_t_PTR_PTR(mrb, unboxed_return_value);
//
//  return boxed_return_value;
//}

///**
// * proc_data_t *
// * readproctab2(int (*)(proc_t *) want_proc, int (*)(proc_t *) want_task, PROCTAB *const restrict PT)
// */
//#define mruby_Procps_readproctab2_FUNCTION
//mrb_value
//mruby_Procps_readproctab2(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_want_proc;
//  mrb_value boxed_want_task;
//  mrb_value boxed_PT;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &boxed_want_proc, &boxed_want_task, &boxed_PT);
//
//  /* Type checking */
//  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_proc_t_PTR_RPAREN(boxed_want_proc);
//  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_proc_t_PTR_RPAREN(boxed_want_task);
//  if (!mruby_Procps_typecheck_PROCTAB(mrb, boxed_PT)) {
//    mrb_raise(mrb, E_TYPE_ERROR, "PROCTAB expected");
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  int (*unboxed_want_proc)(proc_t *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_proc_t_PTR_RPAREN(boxed_want_proc);
//
//  int (*unboxed_want_task)(proc_t *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_proc_t_PTR_RPAREN(boxed_want_task);
//
//  PROCTAB *const restrict unboxed_PT = (mrb_nil_p(boxed_PT) ? NULL : mruby_Procps_unbox_PROCTAB(boxed_PT));
//
//  /* Invocation */
//  proc_data_t * unboxed_return_value = readproctab2(unboxed_want_proc, unboxed_want_task, unboxed_PT);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_proc_data_t(mrb, unboxed_return_value));
//
//  return boxed_return_value;
//}

///**
// * proc_data_t *
// * readproctab3(int (*)(proc_t *) want_task, PROCTAB *const restrict PT)
// */
//#define mruby_Procps_readproctab3_FUNCTION
//mrb_value
//mruby_Procps_readproctab3(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_want_task;
//  mrb_value boxed_PT;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "oo", &boxed_want_task, &boxed_PT);
//
//  /* Type checking */
//  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_proc_t_PTR_RPAREN(boxed_want_task);
//  if (!mruby_Procps_typecheck_PROCTAB(mrb, boxed_PT)) {
//    mrb_raise(mrb, E_TYPE_ERROR, "PROCTAB expected");
//    return mrb_nil_value();
//  }
//
//  /* Unbox params */
//  int (*unboxed_want_task)(proc_t *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_proc_t_PTR_RPAREN(boxed_want_task);
//
//  PROCTAB *const restrict unboxed_PT = (mrb_nil_p(boxed_PT) ? NULL : mruby_Procps_unbox_PROCTAB(boxed_PT));
//
//  /* Invocation */
//  proc_data_t * unboxed_return_value = readproctab3(unboxed_want_task, unboxed_PT);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_proc_data_t(mrb, unboxed_return_value));
//
//  return boxed_return_value;
//}

///**
// * proc_t *
// * readtask(PROCTAB *const restrict PT, const proc_t *const restrict p, proc_t *restrict t)
// */
//#define mruby_Procps_readtask_FUNCTION
//mrb_value
//mruby_Procps_readtask(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_PT;
//  mrb_value boxed_p;
//  mrb_value boxed_t;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "ooo", &boxed_PT, &boxed_p, &boxed_t);
//
//  /* Type checking */
//  if (!mruby_Procps_typecheck_PROCTAB(mrb, boxed_PT)) {
//    mrb_raise(mrb, E_TYPE_ERROR, "PROCTAB expected");
//    return mrb_nil_value();
//  }
//  TODO_type_check_proc_t_PTR_restrict(boxed_p);
//
//  /* Unbox params */
//  PROCTAB *const restrict unboxed_PT = (mrb_nil_p(boxed_PT) ? NULL : mruby_Procps_unbox_PROCTAB(boxed_PT));
//
//  const proc_t *const restrict unboxed_p = TODO_mruby_unbox_proc_t_PTR_restrict(boxed_p);
//
//  proc_t *restrict unboxed_t = (mrb_nil_p(boxed_t) ? NULL : mruby_Procps_unbox_proc_t(boxed_t));
//
//  /* Invocation */
//  proc_t * unboxed_return_value = readtask(unboxed_PT, unboxed_p, unboxed_t);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_proc_t(mrb, unboxed_return_value));
//
//  return boxed_return_value;
//}

/**
 * int
 * signal_name_to_number(const char *restrict name)
 */
#define mruby_Procps_signal_name_to_number_FUNCTION
mrb_value
mruby_Procps_signal_name_to_number(mrb_state* mrb, mrb_value self)
{

  char * unboxed_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &unboxed_name);

  /* Invocation */
  int unboxed_return_value = signal_name_to_number(unboxed_name);

  /* Box the return value */
  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);

  return boxed_return_value;
}

/**
 * const char *
 * signal_number_to_name(int signo)
 */
#define mruby_Procps_signal_number_to_name_FUNCTION
mrb_value
mruby_Procps_signal_number_to_name(mrb_state* mrb, mrb_value self)
{

  mrb_int unboxed_signo;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &unboxed_signo);

  /* Invocation */
  const char * unboxed_return_value = signal_number_to_name(unboxed_signo);

  /* Box the return value */
  mrb_value boxed_return_value = unboxed_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, unboxed_return_value);

  return boxed_return_value;
}

/**
 * char *
 * sprint_uptime(int human_readable)
 */
#define mruby_Procps_sprint_uptime_FUNCTION
mrb_value
mruby_Procps_sprint_uptime(mrb_state* mrb, mrb_value self)
{

  mrb_int unboxed_human_readable;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &unboxed_human_readable);

  /* Invocation */
  char * unboxed_return_value = sprint_uptime(unboxed_human_readable);

  /* Box the return value */
  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_void_pointer(mrb, unboxed_return_value));

  return boxed_return_value;
}

/**
 * char *
 * strtosig(const char *restrict s)
 */
#define mruby_Procps_strtosig_FUNCTION
mrb_value
mruby_Procps_strtosig(mrb_state* mrb, mrb_value self)
{

  char * unboxed_s = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &unboxed_s);

  /* Invocation */
  char * unboxed_return_value = strtosig(unboxed_s);

  /* Box the return value */
  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_void_pointer(mrb, unboxed_return_value));

  return boxed_return_value;
}

///**
// * int
// * tty_to_dev(const char *const restrict name)
// */
//#define mruby_Procps_tty_to_dev_FUNCTION
//mrb_value
//mruby_Procps_tty_to_dev(mrb_state* mrb, mrb_value self)
//{
//
//  mrb_value boxed_name;
//
//  /* Fetch the args */
//  mrb_get_args(mrb, "o", &boxed_name);
//
//  /* Type checking */
//  TODO_type_check_char_PTR_restrict(boxed_name);
//
//  /* Unbox params */
//  const char *const restrict unboxed_name = TODO_mruby_unbox_char_PTR_restrict(boxed_name);
//
//  /* Invocation */
//  int unboxed_return_value = tty_to_dev(unboxed_name);
//
//  /* Box the return value */
//  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);
//
//  return boxed_return_value;
//}

/**
 * void
 * unix_print_signals()
 */
#define mruby_Procps_unix_print_signals_FUNCTION
mrb_value
mruby_Procps_unix_print_signals(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  unix_print_signals();

  return mrb_nil_value();
}

/**
 * int
 * uptime(double * uptime_secs, double * idle_secs)
 */
#define mruby_Procps_uptime_FUNCTION
mrb_value
mruby_Procps_uptime(mrb_state* mrb, mrb_value self)
{

  mrb_value boxed_uptime_secs;
  mrb_value boxed_idle_secs;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &boxed_uptime_secs, &boxed_idle_secs);

  /* Type checking */
  if (!mruby_Procps_typecheck_void_pointer(mrb, boxed_uptime_secs, "double *")) {
    return mrb_nil_value();
  }
  if (!mruby_Procps_typecheck_void_pointer(mrb, boxed_idle_secs, "double *")) {
    return mrb_nil_value();
  }

  /* Unbox params */
  void * unboxed_uptime_secs = (mrb_nil_p(boxed_uptime_secs) ? NULL : mruby_Procps_unbox_void_pointer(mrb, boxed_uptime_secs));

  void * unboxed_idle_secs = (mrb_nil_p(boxed_idle_secs) ? NULL : mruby_Procps_unbox_void_pointer(mrb, boxed_idle_secs));

  /* Invocation */
  int unboxed_return_value = uptime(unboxed_uptime_secs, unboxed_idle_secs);

  /* Box the return value */
  mrb_value boxed_return_value = mrb_fixnum_value(unboxed_return_value);

  return boxed_return_value;
}

/**
 * void
 * vminfo()
 */
#define mruby_Procps_vminfo_FUNCTION
mrb_value
mruby_Procps_vminfo(mrb_state* mrb, mrb_value self)
{

  /* Invocation */
  vminfo();

  return mrb_nil_value();
}

/**
 * void *
 * xcalloc(unsigned int size)
 */
#define mruby_Procps_xcalloc_FUNCTION
mrb_value
mruby_Procps_xcalloc(mrb_state* mrb, mrb_value self)
{

  mrb_int unboxed_size;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &unboxed_size);

  /* Invocation */
  void * unboxed_return_value = xcalloc(unboxed_size);

  /* Box the return value */
  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_void_pointer(mrb, unboxed_return_value));

  return boxed_return_value;
}

/**
 * void *
 * xmalloc(int size)
 */
#define mruby_Procps_xmalloc_FUNCTION
mrb_value
mruby_Procps_xmalloc(mrb_state* mrb, mrb_value self)
{

  mrb_int unboxed_size;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &unboxed_size);

  /* Invocation */
  void * unboxed_return_value = xmalloc(unboxed_size);

  /* Box the return value */
  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_void_pointer(mrb, unboxed_return_value));

  return boxed_return_value;
}

/**
 * void *
 * xrealloc(void * oldp, unsigned int size)
 */
#define mruby_Procps_xrealloc_FUNCTION
mrb_value
mruby_Procps_xrealloc(mrb_state* mrb, mrb_value self)
{

  mrb_value boxed_oldp;
  mrb_int unboxed_size;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &boxed_oldp, &unboxed_size);

  /* Type checking */
  if (!mruby_Procps_typecheck_void_pointer(mrb, boxed_oldp, "void *")) {
    return mrb_nil_value();
  }

  /* Unbox params */
  void * unboxed_oldp = (mrb_nil_p(boxed_oldp) ? NULL : mruby_Procps_unbox_void_pointer(mrb, boxed_oldp));

  /* Invocation */
  void * unboxed_return_value = xrealloc(unboxed_oldp, unboxed_size);

  /* Box the return value */
  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_void_pointer(mrb, unboxed_return_value));

  return boxed_return_value;
}

/**
 * char *
 * xstrdup(const char * str)
 */
#define mruby_Procps_xstrdup_FUNCTION
mrb_value
mruby_Procps_xstrdup(mrb_state* mrb, mrb_value self)
{

  char * unboxed_str = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &unboxed_str);

  /* Invocation */
  char * unboxed_return_value = xstrdup(unboxed_str);

  /* Box the return value */
  mrb_value boxed_return_value = (unboxed_return_value == NULL ? mrb_nil_value() : mruby_Procps_box_void_pointer(mrb, unboxed_return_value));

  return boxed_return_value;
}

