/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByTemplate.h"
#include "ifcpp/IFC4/include/IfcShapeAspect.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcTypeObject.h"
#include "ifcpp/IFC4/include/IfcWindowLiningProperties.h"

// ENTITY IfcWindowLiningProperties 
IfcWindowLiningProperties::IfcWindowLiningProperties() {}
IfcWindowLiningProperties::IfcWindowLiningProperties( int id ) { m_id = id; }
IfcWindowLiningProperties::~IfcWindowLiningProperties() {}
shared_ptr<IfcPPObject> IfcWindowLiningProperties::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcWindowLiningProperties> copy_self( new IfcWindowLiningProperties() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = shared_ptr<IfcGloballyUniqueId>(new IfcGloballyUniqueId( createGUID32_wstr().c_str() ) ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_LiningDepth ) { copy_self->m_LiningDepth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_LiningDepth->getDeepCopy(options) ); }
	if( m_LiningThickness ) { copy_self->m_LiningThickness = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_LiningThickness->getDeepCopy(options) ); }
	if( m_TransomThickness ) { copy_self->m_TransomThickness = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_TransomThickness->getDeepCopy(options) ); }
	if( m_MullionThickness ) { copy_self->m_MullionThickness = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_MullionThickness->getDeepCopy(options) ); }
	if( m_FirstTransomOffset ) { copy_self->m_FirstTransomOffset = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_FirstTransomOffset->getDeepCopy(options) ); }
	if( m_SecondTransomOffset ) { copy_self->m_SecondTransomOffset = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_SecondTransomOffset->getDeepCopy(options) ); }
	if( m_FirstMullionOffset ) { copy_self->m_FirstMullionOffset = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_FirstMullionOffset->getDeepCopy(options) ); }
	if( m_SecondMullionOffset ) { copy_self->m_SecondMullionOffset = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_SecondMullionOffset->getDeepCopy(options) ); }
	if( m_ShapeAspectStyle ) { copy_self->m_ShapeAspectStyle = dynamic_pointer_cast<IfcShapeAspect>( m_ShapeAspectStyle->getDeepCopy(options) ); }
	if( m_LiningOffset ) { copy_self->m_LiningOffset = dynamic_pointer_cast<IfcLengthMeasure>( m_LiningOffset->getDeepCopy(options) ); }
	if( m_LiningToPanelOffsetX ) { copy_self->m_LiningToPanelOffsetX = dynamic_pointer_cast<IfcLengthMeasure>( m_LiningToPanelOffsetX->getDeepCopy(options) ); }
	if( m_LiningToPanelOffsetY ) { copy_self->m_LiningToPanelOffsetY = dynamic_pointer_cast<IfcLengthMeasure>( m_LiningToPanelOffsetY->getDeepCopy(options) ); }
	return copy_self;
}
void IfcWindowLiningProperties::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCWINDOWLININGPROPERTIES" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_LiningDepth ) { m_LiningDepth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LiningThickness ) { m_LiningThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TransomThickness ) { m_TransomThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_MullionThickness ) { m_MullionThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FirstTransomOffset ) { m_FirstTransomOffset->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SecondTransomOffset ) { m_SecondTransomOffset->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FirstMullionOffset ) { m_FirstMullionOffset->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SecondMullionOffset ) { m_SecondMullionOffset->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ShapeAspectStyle ) { stream << "#" << m_ShapeAspectStyle->m_id; } else { stream << "$"; }
	stream << ",";
	if( m_LiningOffset ) { m_LiningOffset->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LiningToPanelOffsetX ) { m_LiningToPanelOffsetX->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LiningToPanelOffsetY ) { m_LiningToPanelOffsetY->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcWindowLiningProperties::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcWindowLiningProperties::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 16 ){ std::stringstream err; err << "Wrong parameter count for entity IfcWindowLiningProperties, expecting 16, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_LiningDepth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map );
	m_LiningThickness = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[5], map );
	m_TransomThickness = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[6], map );
	m_MullionThickness = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[7], map );
	m_FirstTransomOffset = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[8], map );
	m_SecondTransomOffset = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[9], map );
	m_FirstMullionOffset = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[10], map );
	m_SecondMullionOffset = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[11], map );
	readEntityReference( args[12], m_ShapeAspectStyle, map );
	m_LiningOffset = IfcLengthMeasure::createObjectFromSTEP( args[13], map );
	m_LiningToPanelOffsetX = IfcLengthMeasure::createObjectFromSTEP( args[14], map );
	m_LiningToPanelOffsetY = IfcLengthMeasure::createObjectFromSTEP( args[15], map );
}
void IfcWindowLiningProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcPreDefinedPropertySet::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "LiningDepth", m_LiningDepth ) );
	vec_attributes.push_back( std::make_pair( "LiningThickness", m_LiningThickness ) );
	vec_attributes.push_back( std::make_pair( "TransomThickness", m_TransomThickness ) );
	vec_attributes.push_back( std::make_pair( "MullionThickness", m_MullionThickness ) );
	vec_attributes.push_back( std::make_pair( "FirstTransomOffset", m_FirstTransomOffset ) );
	vec_attributes.push_back( std::make_pair( "SecondTransomOffset", m_SecondTransomOffset ) );
	vec_attributes.push_back( std::make_pair( "FirstMullionOffset", m_FirstMullionOffset ) );
	vec_attributes.push_back( std::make_pair( "SecondMullionOffset", m_SecondMullionOffset ) );
	vec_attributes.push_back( std::make_pair( "ShapeAspectStyle", m_ShapeAspectStyle ) );
	vec_attributes.push_back( std::make_pair( "LiningOffset", m_LiningOffset ) );
	vec_attributes.push_back( std::make_pair( "LiningToPanelOffsetX", m_LiningToPanelOffsetX ) );
	vec_attributes.push_back( std::make_pair( "LiningToPanelOffsetY", m_LiningToPanelOffsetY ) );
}
void IfcWindowLiningProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcPreDefinedPropertySet::getAttributesInverse( vec_attributes_inverse );
}
void IfcWindowLiningProperties::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcPreDefinedPropertySet::setInverseCounterparts( ptr_self_entity );
}
void IfcWindowLiningProperties::unlinkFromInverseCounterparts()
{
	IfcPreDefinedPropertySet::unlinkFromInverseCounterparts();
}