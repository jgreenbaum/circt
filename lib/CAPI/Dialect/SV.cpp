//===- SV.cpp - C interface for the SV dialect ----------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "circt-c/Dialect/SV.h"
#include "circt/Dialect/SV/SVAttributes.h"
#include "circt/Dialect/SV/SVDialect.h"
#include "circt/Dialect/SV/SVPasses.h"
#include "mlir/CAPI/IR.h"
#include "mlir/CAPI/Registration.h"
#include "mlir/CAPI/Support.h"

using namespace circt::sv;

void registerSVPasses() { registerPasses(); }
MLIR_DEFINE_CAPI_DIALECT_REGISTRATION(SystemVerilog, sv, SVDialect)

#include "circt/Dialect/SV/SVCAPIAttrs.cpp.inc"