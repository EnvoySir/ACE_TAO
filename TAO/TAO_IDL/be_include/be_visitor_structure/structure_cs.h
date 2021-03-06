/* -*- c++ -*- */

//=============================================================================
/**
 *  @file    structure_cs.h
 *
 *  Concrete visitor for the Structure class
 *  This one provides code generation for the structure in the client stubs.
 *
 *  @author Aniruddha Gokhale
 */
//=============================================================================


#ifndef _BE_VISITOR_STRUCTURE_STRUCTURE_CS_H_
#define _BE_VISITOR_STRUCTURE_STRUCTURE_CS_H_

/**
 * @class be_visitor_structure_cs
 *
 * @brief be_visitor_structure_cs
 *
 * This is a concrete visitor to generate the client stubs for structure
 */
class be_visitor_structure_cs : public be_visitor_structure
{
public:
  /// constructor
  be_visitor_structure_cs (be_visitor_context *ctx);

  /// destructor
  ~be_visitor_structure_cs (void);

  /// visit structure.
  virtual int visit_structure (be_structure *node);
};

#endif /* _BE_VISITOR_STRUCTURE_STRUCTURE_CS_H_ */
