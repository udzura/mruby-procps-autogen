#ifdef mruby_Procps_closeproc_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "closeproc", mruby_Procps_closeproc, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_cpuinfo_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "cpuinfo", mruby_Procps_cpuinfo, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_dev_to_tty_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "dev_to_tty", mruby_Procps_dev_to_tty, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_escape_command_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "escape_command", mruby_Procps_escape_command, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_escape_str_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "escape_str", mruby_Procps_escape_str, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_escape_strlist_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "escape_strlist", mruby_Procps_escape_strlist, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_escaped_copy_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "escaped_copy", mruby_Procps_escaped_copy, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_free_slabinfo_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "free_slabinfo", mruby_Procps_free_slabinfo, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_freeproc_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "freeproc", mruby_Procps_freeproc, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_get_ns_id_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "get_ns_id", mruby_Procps_get_ns_id, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_get_ns_name_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "get_ns_name", mruby_Procps_get_ns_name, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_get_pid_digits_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "get_pid_digits", mruby_Procps_get_pid_digits, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_get_proc_stats_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "get_proc_stats", mruby_Procps_get_proc_stats, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_get_slabinfo_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "get_slabinfo", mruby_Procps_get_slabinfo, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_getbtime_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "getbtime", mruby_Procps_getbtime, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_getdiskstat_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "getdiskstat", mruby_Procps_getdiskstat, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_getpartitions_num_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "getpartitions_num", mruby_Procps_getpartitions_num, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_getslabinfo_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "getslabinfo", mruby_Procps_getslabinfo, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_getstat_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "getstat", mruby_Procps_getstat, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_loadavg_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "loadavg", mruby_Procps_loadavg, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_look_up_our_self_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "look_up_our_self", mruby_Procps_look_up_our_self, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_lookup_wchan_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "lookup_wchan", mruby_Procps_lookup_wchan, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_meminfo_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "meminfo", mruby_Procps_meminfo, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_openproc_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "openproc", mruby_Procps_openproc, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_pretty_print_signals_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "pretty_print_signals", mruby_Procps_pretty_print_signals, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_print_given_signals_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "print_given_signals", mruby_Procps_print_given_signals, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_print_uptime_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "print_uptime", mruby_Procps_print_uptime, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_procps_linux_version_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "procps_linux_version", mruby_Procps_procps_linux_version, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_put_slabinfo_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "put_slabinfo", mruby_Procps_put_slabinfo, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_pwcache_get_group_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "pwcache_get_group", mruby_Procps_pwcache_get_group, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_pwcache_get_user_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "pwcache_get_user", mruby_Procps_pwcache_get_user, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_read_cmdline_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "read_cmdline", mruby_Procps_read_cmdline, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_readeither_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "readeither", mruby_Procps_readeither, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_readproc_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "readproc", mruby_Procps_readproc, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_readproctab_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "readproctab", mruby_Procps_readproctab, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_readproctab2_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "readproctab2", mruby_Procps_readproctab2, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_readproctab3_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "readproctab3", mruby_Procps_readproctab3, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_readtask_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "readtask", mruby_Procps_readtask, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_signal_name_to_number_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "signal_name_to_number", mruby_Procps_signal_name_to_number, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_signal_number_to_name_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "signal_number_to_name", mruby_Procps_signal_number_to_name, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_sprint_uptime_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "sprint_uptime", mruby_Procps_sprint_uptime, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_strtosig_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "strtosig", mruby_Procps_strtosig, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_tty_to_dev_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "tty_to_dev", mruby_Procps_tty_to_dev, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_unix_print_signals_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "unix_print_signals", mruby_Procps_unix_print_signals, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_uptime_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "uptime", mruby_Procps_uptime, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_vminfo_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "vminfo", mruby_Procps_vminfo, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_xcalloc_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "xcalloc", mruby_Procps_xcalloc, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_xmalloc_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "xmalloc", mruby_Procps_xmalloc, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_xrealloc_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "xrealloc", mruby_Procps_xrealloc, MRB_ARGS_REQ(0));
#endif

#ifdef mruby_Procps_xstrdup_FUNCTION
  mrb_define_class_method(mrb, Procps_module(mrb), "xstrdup", mruby_Procps_xstrdup, MRB_ARGS_REQ(0));
#endif

