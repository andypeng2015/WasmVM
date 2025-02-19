#ifndef WASMVM_STRUCTURE_FUNC
#define WASMVM_STRUCTURE_FUNC

#include <defines.h>
#include <dataTypes/Value.h>
#include <dataTypes/vector_t.h>
#include <structures/WasmInstr.h>

typedef struct {
    u32_t type;
    vector_t(ValueType) locals;
    vector_t(WasmInstr) body;
} WasmFunc;

#endif