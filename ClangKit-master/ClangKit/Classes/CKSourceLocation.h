/*******************************************************************************
 * Copyright (c) 2012, Jean-David Gadina - www.xs-labs.com
 * All rights reserved.
 * 
 * Boost Software License - Version 1.0 - August 17th, 2003
 * 
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 * 
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer,
 * must be included in all copies of the Software, in whole or in part, and
 * all derivative works of the Software, unless such copies or derivative
 * works are solely in the form of machine-executable object code generated by
 * a source language processor.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ******************************************************************************/
 
/* $Id$ */

/*!
 * @header          CKSourceLocation.h
 * @copyright       (c) 2010-2014 - Jean-David Gadina - www.xs-labs.com
 * @author          Jean-David Gadina - www.xs-labs.com
 * @abstract        ClangKit source location class
 */

/*!
 * @class           CKSourceLocation
 * @abstract        Source location class
 */
@interface CKSourceLocation: NSObject
{
@protected
    
    const void * _ptrData1;
    const void * _ptrData2;
    unsigned int _intData;
    NSString   * _fileName;
}

/*!
 * @property        ptrData1
 * @abstract        Internal pointer data 1
 */
@property( atomic, readonly ) const void * ptrData1;

/*!
 * @property        ptrData2
 * @abstract        Internal pointer data 1
 */
@property( atomic, readonly ) const void * ptrData2;

/*!
 * @property        intData
 * @abstract        Internal integer data
 */
@property( atomic, readonly ) unsigned int intData;

/*!
 * @property        fileName
 * @abstract        The source location's filename
 */
@property( atomic, readonly ) NSString * fileName;

/*!
 * @method          sourceLocationWithPointerData1:pointerData2:intData:
 * @abstract        Gets a source location object
 * @param           ptrData1    Pointer data 1
 * @param           ptrData2    Pointer data 2
 * @param           intData     Integer data
 * @return          The source location object
 * @discussion      The returned object is autoreleased.
 */
+ ( id )sourceLocationWithPointerData1: ( const void * )ptrData1 pointerData2: ( const void * )ptrData2 intData: ( unsigned int )intData;

/*!
 * @method          initWithPointerData1:pointerData2:intData:
 * @abstract        Initializes a source location object
 * @param           ptrData1    Pointer data 1
 * @param           ptrData2    Pointer data 2
 * @param           intData     Integer data
 * @return          The source location object
 */
- ( id )initWithPointerData1: ( const void * )ptrData1 pointerData2: ( const void * )ptrData2 intData: ( unsigned int )intData;

@end
