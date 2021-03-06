#pragma once
#include <QString>
#include "pa_element.h"
#include "pa_species.h"

namespace pa_db
{
	class pa_object
	{
		public:
			pa_object( );
			int id( ) const;
			void set_id( int id );
			bool is_empty( ) const;
			
			QString name( ) const;
			void set_name( const QString &name );
			
			QVector< pa_element > elements( ) const;
			void set_elements( const QVector< pa_element >& list );
			
			QVector< pa_species > species() const;
			void setSpecies( const QVector< pa_species >& list );
		
		private:
			int m_id;
			QString m_name;
			QVector< pa_element >	m_elements;
			QVector< pa_species >	mSpecies;
	};
}
