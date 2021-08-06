#ifndef WASMVM_ERROR_DEF
#define WASMVM_ERROR_DEF

extern int wasmvm_errno;

enum {
    ERROR_success = 0,
    ERROR_duplicate_func,  // "duplicate func"
    ERROR_invalid_conv_int,  // "invalid conversion to integer"
    ERROR_too_many_locals,  // "too many locals"
    ERROR_div_zero,  // "integer divide by zero"
    ERROR_multi_mem,  // "multiple memories"
    ERROR_import_after_mem,  // "import after memory"
    ERROR_unknown_func,  // "unknown function"
    ERROR_res_before_param,  // "result before parameter"
    ERROR_malform_sec_id,  // "malformed section id"
    ERROR_len_out_of_bound,  // "length out of bounds"
    ERROR_align_gt_natural,  // "alignment must not be larger than natural"
    ERROR_int_too_large,  // "integer too large"
    ERROR_unexpected_end,  // "unexpected end"
    ERROR_magic_not_detect,  // "magic header not detected"
    ERROR_zero_expected,  // "zero flag expected"
    ERROR_const_out_range,  // "constant out of range"
    ERROR_int_overflow,  // "integer overflow"
    ERROR_uninit_elem,  // "uninitialized element"
    ERROR_unknown_global_0,  // "unknown global 0"
    ERROR_call_stack_exhst,  // "call stack exhausted"
    ERROR_unknown_global,  // "unknown global"
    ERROR_unknown_mem_1,  // "unknown memory 1"
    ERROR_unknown_bin_ver,  // "unknown binary version"
    ERROR_uninit,  // "uninitialized"
    ERROR_unknown_import,  // "unknown import"
    ERROR_i32_const,  // "i32 constant"
    ERROR_alignment,  // "alignment"
    ERROR_import_aft_glob,  // "import after global"
    ERROR_dup_export,  // "duplicate export name"
    ERROR_multi_start,  // "multiple start sections"
    ERROR_unknown_global_1,  // "unknown global 1"
    ERROR_inconsist_func,  // "function and code section have inconsistent lengths"
    ERROR_req_const_expr,  // "constant expression required"
    ERROR_sect_size_mis,  // "section size mismatch"
    ERROR_malform_import,  // "malformed import kind"
    ERROR_indir_call_mis,  // "indirect call type mismatch"
    ERROR_unexpect_end,  // "unexpected end of section or function"
    ERROR_indir_call,  // "indirect call"
    ERROR_elem_seg_not_fit,  // "elements segment does not fit"
    ERROR_inline_func,  // "inline function type"
    ERROR_multi_table,  // "multiple tables"
    ERROR_unknown_operator,  // "unknown operator"
    ERROR_malform_utf8,  // "malformed UTF-8 encoding"
    ERROR_type_mis,  // "type mismatch"
    ERROR_incomp_import,  // "incompatible import type"
    ERROR_undefined,  // "undefined"
    ERROR_malform_mut,  // "malformed mutability"
    ERROR_dup_table,  // "duplicate table"
    ERROR_unknown_label,  // "unknown label"
    ERROR_mis_label,  // "mismatching label"
    ERROR_import_aft_table,  // "import after table"
    ERROR_immut_global,  // "global is immutable"
    ERROR_mem_acc_out_bound,  // "out of bounds memory access"
    ERROR_junk_aft_sect,  // "junk after last section"
    ERROR_unknown_local,  // "unknown local"
    ERROR_data_seg_not_fit,  // "data segment does not fit"
    ERROR_start_func,  // "start function"
    ERROR_unknown_type,  // "unknown type"
    ERROR_unexpected_token,  // "unexpected token"
    ERROR_mem_size_gt_4g,  // "memory size must be at most 65536 pages (4GiB)"
    ERROR_undefined_elem,  // "undefined element"
    ERROR_unknown_mem,  // "unknown memory"
    ERROR_unreachable,  // "unreachable"
    ERROR_min_gt_max,  // "size minimum must not be greater than maximum"
    ERROR_int_rep_too_long,  // "integer representation too long"
    ERROR_dup_mem,  // "duplicate memory"
    ERROR_import_aft_func,  // "import after function"
    ERROR_dup_global,  // "duplicate global"
    ERROR_dup_local,  // "duplicate local"
    ERROR_unknown_table,  // "unknown table"
    ERROR_i32_const_range,  // "i32 constant out of range"
};

const char* wasmvm_strerror(int errnum);

#endif