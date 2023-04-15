Function B64Encode(bytes)
    blockSize = b64Enc.InputBlockSize
    For offset = 0 To LenB(bytes) - 1 Step blockSize
        length = Min(blockSize, LenB(bytes) - offset)
        b64Block = b64Enc.TransformFinalBlock((bytes), offset, length)
        result = result & utf8.GetString((b64Block))
    Next
    B64Encode = result
End Function