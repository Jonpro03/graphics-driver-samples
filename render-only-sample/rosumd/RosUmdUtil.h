////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Utility
//
// Copyright (C) Microsoft Corporation
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

template<typename InputType>
FORCEINLINE
void
AlignValue(
    InputType &Value,
    UINT Alignment
    )
{
    Value = InputType((SIZE_T(Value) + (Alignment - 1)) & ~SIZE_T(Alignment - 1));
}
